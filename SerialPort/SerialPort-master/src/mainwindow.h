#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QByteArray>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDesktopServices>
#include <QList>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void findPorts();
    bool initSerialPort();
    void sendMsg(const QString &msg);
    void flushText();

public slots:
    void recvMsg();

private slots:


    void on_open_xiebo_clicked();

    void on_close_xiebo_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *serialPort;

    int ASC2BCD(unsigned char *bcd, const char *asc, int len);
};
#endif // MAINWINDOW_H
