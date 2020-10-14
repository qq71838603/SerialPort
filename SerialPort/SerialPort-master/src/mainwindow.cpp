#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

QByteArray dataText;
QByteArray dataText2;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    /*
     *github*
    connect(ui->github, &QAction::triggered, [=](){
        QDesktopServices::openUrl(QUrl("https://github.com/qq71838603"));
    });

    connect(ui->readMe, &QAction::triggered, [=](){
        QDesktopServices::openUrl(QUrl("https://github.com/qq71838603"));
    });
    */

    ui->hexRecv->setChecked(true);
    ui->hexSend->setChecked(true);

    serialPort = new QSerialPort;
    findPorts();


    //connect(ui->openPort_, &QPushButton::toggled,this, &MainWindow::initSerialPort);
    //connect(ui->serialPortSwitch,&QPushButton::clicked,this,&SerialPortAssistant::switchSerialPort);


    ui->open_xiebo->setEnabled(false);
    ui->close_xiebo->setEnabled(false);

    // open port
    connect(ui->openPort, &QCheckBox::toggled, [=](bool checked)
    {
       if (checked == true)
       {
           qDebug() << "Open";
           initSerialPort();
           ui->btnSend->setEnabled(true);
           ui->open_xiebo->setEnabled(true);
           ui->close_xiebo->setEnabled(true);

       }
       else
       {
           this->serialPort->close();
           ui->btnSend->setEnabled(false);
           ui->open_xiebo->setEnabled(false);
           ui->close_xiebo->setEnabled(false);
       }
    });


    // recv
    connect(serialPort, SIGNAL(readyRead()), this, SLOT(recvMsg()));

    // send
    connect(ui->btnSend, &QPushButton::clicked, [=](){
       sendMsg(ui->message->toPlainText());
    });

    // clear recv data
    connect(ui->btnClear, &QPushButton::clicked, [=](){
       dataText.clear();
       dataText2.clear();
       flushText();
    });

    // hex <-> char
    connect(ui->hexRecv, &QRadioButton::toggled, [=](){
        flushText();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

//ascii转bcd码
static char bcd2ascii[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
static char ascii2bcd1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static char ascii2bcd2[6]  = {0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F};
int MainWindow::ASC2BCD(unsigned char *bcd, const char *asc, int len)
{
    char c = 0;
    char index = 0;
    char i = 0;

    len >>= 1;

    for(; i < len; i++) {
        //first BCD
        if(*asc >= 'A' && *asc <= 'F')
        {
            index = *asc - 'A';
            c  = ascii2bcd2[index] << 4;
        }
        else if(*asc >= '0' && *asc <= '9')
        {
            index = *asc - '0';
            c  = ascii2bcd1[index] << 4;
        }
        asc++;

        //second BCD
        if(*asc >= 'A' && *asc <= 'F') {
            index = *asc - 'A';
            c  |= ascii2bcd2[index];
        } else if(*asc >= '0' && *asc <= '9') {
            index = *asc - '0';
            c  |= ascii2bcd1[index];
        }
        asc++;

        *bcd++ = c;
    }
    return 0;
}


void MainWindow::findPorts()
{
    QList<QSerialPortInfo> ports = QSerialPortInfo::availablePorts();
    int cnt = 0;
    for (int i = 0; i < ports.size(); ++i) {
        if (ports.at(i).isBusy()) continue;
        cnt++;
        ui->portName->addItem(ports.at(i).portName());
    }
    if (cnt == 0) {
        QMessageBox::warning(NULL, "错误", "没有空闲端口！");
    }
}

bool MainWindow::initSerialPort()
{
    int bits;
    // port
    serialPort->setPortName(ui->portName->currentText());
    if (serialPort->open(QIODevice::ReadWrite) == false) {
        QMessageBox::warning(NULL, "错误", "打开失败");
        return false;
    }

    // baudRate
    serialPort->setBaudRate(ui->baudRate->currentText().toInt());

    // dataBits
    bits = ui->dataBits->currentText().toInt();
    if (bits == 8) serialPort->setDataBits(QSerialPort::Data8);
    else if (bits == 7) serialPort->setDataBits(QSerialPort::Data7);
    else if (bits == 6) serialPort->setDataBits(QSerialPort::Data6);
    else if (bits == 5) serialPort->setDataBits(QSerialPort::Data5);

    // stopBits
    bits = ui->stopBits->currentText().toInt();
    if (bits == 1) serialPort->setStopBits(QSerialPort::OneStop);
    else if (bits == 2) serialPort->setStopBits(QSerialPort::TwoStop);

    // parityBits
    QString str = ui->parityBits->currentText();
    if (str == "无") serialPort->setParity(QSerialPort::NoParity);
    else if (str == "偶校验") serialPort->setParity(QSerialPort::EvenParity);
    else if (str == "奇校验") serialPort->setParity(QSerialPort::OddParity);
    return true;
}

// data <-> char
void MainWindow::flushText()
{
    ui->recvData->clear();
    // show hex
    if (ui->hexRecv->isChecked())
    {
        QString str = dataText.toHex(' ').toUpper();
        ui->recvData->appendPlainText(str);
    }else
    // show char
    {
        ui->recvData->appendPlainText(QString(dataText));
    }
}

void MainWindow::sendMsg(const QString &msg)
{
    // send hex
    if (ui->charSend->isChecked())
    {
        serialPort->write(msg.toLatin1());
    }
    // send char
    else
    {
        serialPort->write(QByteArray::fromHex(msg.toLatin1()));
    }
}

void MainWindow::recvMsg()
{
    //读取接收到的所有内容
    QByteArray msg = this->serialPort->readAll();
    //qDebug() << "msg: " <<  msg;

    if (msg.isEmpty())
        return;

    //将读取到的内容保存在dataText中
    dataText.append(msg);
    //做数据格式转换并打印
    flushText();

}


void MainWindow::on_open_xiebo_clicked()
{

    int checknum = 0;

    //从UI中获取流水号
    QString a = ui->DI3->text();

    //去除空格
    a = a.remove(QRegExp("\\s"));

    QString checkmsg = "68"+a+"68600535dff1ffdd";

    //进行CRC8校验
    QString recvtempStr = checkmsg;

    //将要校验的字符串字母转为大写,用于下一步的ASC2BCD()
    recvtempStr = recvtempStr.toUpper();

    //qDebug()<<"recvtempStr is:"<<recvtempStr;

    int Strlength = recvtempStr.length();
    QByteArray recvba = recvtempStr.toLatin1();
    //qDebug()<<"ba.data() is:"<<recvba.data();

    //保存用于校验的地址
    unsigned char recvc2[300] = {0};
    //转换BCD码用于校验
    ASC2BCD(recvc2,recvba.data(),Strlength);

    for (int i = 0; i< Strlength/2;i++)
    {
        //qDebug()<<"recvc2[i] is:"<<recvc2[i];
        checknum += recvc2[i];
    }

    //校验,将校验码前的字段相加取模256
    //qDebug()<<"checknum is:"<<checknum;
    checknum = checknum % 256 ;

    //再将得到的校验码转换为16进制显示的字符串
    QString check = tr("%1").arg(checknum);
    check = QString::number((check.toInt(nullptr,10)),16);


    //组装报文
    QString msg = "68"+ a + "68600535dff1ffdd"+ check + "16";

    //将组装好的报文打印在屏幕上
    ui->recvData_2->setText(msg);

    //qDebug()<<"msg is :"<<msg;

    //清空接收端的报文
    dataText.clear();
    flushText();

    //发送组装的报文
    sendMsg(msg);

}

void MainWindow::on_close_xiebo_clicked()
{
    int checknum = 0;

    //从UI中获取流水号
    QString a = ui->DI3->text();
    //去除空格
    a = a.remove(QRegExp("\\s"));
    QString checkmsg = "68"+a+"68600535dff1ff88";

    //进行CRC8校验
    QString recvtempStr = checkmsg;

    //将要校验的字符串字母转为大写,用于下一步的ASC2BCD()
    recvtempStr = recvtempStr.toUpper();

    //qDebug()<<"recvtempStr is:"<<recvtempStr;

    int Strlength = recvtempStr.length();
    QByteArray recvba = recvtempStr.toLatin1();
    //qDebug()<<"ba.data() is:"<<recvba.data();

    //保存用于校验的地址
    unsigned char recvc2[300] = {0};
    //转换BCD码用于校验
    ASC2BCD(recvc2,recvba.data(),Strlength);

    for (int i = 0; i< Strlength/2;i++)
    {
        //qDebug()<<"recvc2[i] is:"<<recvc2[i];
        checknum += recvc2[i];
    }

    //校验,将校验码前的字段相加取模256
    //qDebug()<<"checknum is:"<<checknum;
    checknum = checknum % 256 ;

    //再将得到的校验码转换为16进制显示的字符串
    QString check = tr("%1").arg(checknum);
    check = QString::number((check.toInt(nullptr,10)),16);


    //组装报文
    QString msg = "68"+ a + "68600535dff1ff88"+ check + "16";

    //将组装好的报文打印在屏幕上
    ui->recvData_2->setText(msg);

    //qDebug()<<"msg is :"<<msg;

    //清空接收端的报文
    dataText.clear();
    flushText();

    //发送组装的报文
    sendMsg(msg);
}


