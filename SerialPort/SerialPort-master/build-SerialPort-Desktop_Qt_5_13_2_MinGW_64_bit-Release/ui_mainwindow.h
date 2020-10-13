/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *github;
    QAction *readMe;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *message;
    QGridLayout *gridLayout_2;
    QRadioButton *hexSend;
    QRadioButton *charSend;
    QPushButton *btnSend;
    QWidget *widget_8;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QComboBox *stopBits;
    QLabel *label_3;
    QLabel *label_2;
    QComboBox *portName;
    QLabel *label_4;
    QLabel *label_5;
    QRadioButton *charRecv;
    QCheckBox *openPort;
    QLabel *label;
    QComboBox *dataBits;
    QComboBox *parityBits;
    QRadioButton *hexRecv;
    QComboBox *baudRate;
    QPushButton *btnClear;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLineEdit *DI3;
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QTextEdit *recvData_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *open_xiebo;
    QPushButton *close_xiebo;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_12;
    QPlainTextEdit *recvData;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuasdfasdf;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(943, 575);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/dianbiao.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        github = new QAction(MainWindow);
        github->setObjectName(QString::fromUtf8("github"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/github.ico"), QSize(), QIcon::Normal, QIcon::Off);
        github->setIcon(icon1);
        readMe = new QAction(MainWindow);
        readMe->setObjectName(QString::fromUtf8("readMe"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/help.ico"), QSize(), QIcon::Normal, QIcon::Off);
        readMe->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget_9 = new QWidget(centralwidget);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setMaximumSize(QSize(1000, 100));
        horizontalLayout_2 = new QHBoxLayout(widget_9);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        message = new QTextEdit(widget_9);
        message->setObjectName(QString::fromUtf8("message"));

        horizontalLayout_2->addWidget(message);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        hexSend = new QRadioButton(widget_9);
        hexSend->setObjectName(QString::fromUtf8("hexSend"));
        hexSend->setMinimumSize(QSize(20, 20));

        gridLayout_2->addWidget(hexSend, 1, 0, 1, 1);

        charSend = new QRadioButton(widget_9);
        charSend->setObjectName(QString::fromUtf8("charSend"));
        charSend->setMinimumSize(QSize(20, 20));

        gridLayout_2->addWidget(charSend, 1, 1, 1, 1);

        btnSend = new QPushButton(widget_9);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setEnabled(false);
        btnSend->setMinimumSize(QSize(0, 25));

        gridLayout_2->addWidget(btnSend, 0, 0, 1, 2);


        horizontalLayout_2->addLayout(gridLayout_2);


        gridLayout_3->addWidget(widget_9, 1, 0, 1, 1);

        widget_8 = new QWidget(centralwidget);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        gridLayout_4 = new QGridLayout(widget_8);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stopBits = new QComboBox(widget_8);
        stopBits->addItem(QString());
        stopBits->addItem(QString());
        stopBits->setObjectName(QString::fromUtf8("stopBits"));
        stopBits->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(stopBits, 4, 1, 1, 1);

        label_3 = new QLabel(widget_8);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(widget_8);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        portName = new QComboBox(widget_8);
        portName->setObjectName(QString::fromUtf8("portName"));
        portName->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(portName, 0, 1, 1, 1);

        label_4 = new QLabel(widget_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_5 = new QLabel(widget_8);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        charRecv = new QRadioButton(widget_8);
        charRecv->setObjectName(QString::fromUtf8("charRecv"));

        gridLayout->addWidget(charRecv, 8, 1, 1, 1);

        openPort = new QCheckBox(widget_8);
        openPort->setObjectName(QString::fromUtf8("openPort"));
        openPort->setEnabled(true);
        openPort->setMouseTracking(true);
        openPort->setCheckable(true);
        openPort->setChecked(false);

        gridLayout->addWidget(openPort, 5, 1, 1, 1);

        label = new QLabel(widget_8);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dataBits = new QComboBox(widget_8);
        dataBits->addItem(QString());
        dataBits->addItem(QString());
        dataBits->addItem(QString());
        dataBits->setObjectName(QString::fromUtf8("dataBits"));
        dataBits->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(dataBits, 2, 1, 1, 1);

        parityBits = new QComboBox(widget_8);
        parityBits->addItem(QString());
        parityBits->addItem(QString());
        parityBits->addItem(QString());
        parityBits->setObjectName(QString::fromUtf8("parityBits"));
        parityBits->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(parityBits, 3, 1, 1, 1);

        hexRecv = new QRadioButton(widget_8);
        hexRecv->setObjectName(QString::fromUtf8("hexRecv"));

        gridLayout->addWidget(hexRecv, 8, 0, 1, 1);

        baudRate = new QComboBox(widget_8);
        baudRate->addItem(QString());
        baudRate->addItem(QString());
        baudRate->addItem(QString());
        baudRate->addItem(QString());
        baudRate->addItem(QString());
        baudRate->addItem(QString());
        baudRate->addItem(QString());
        baudRate->setObjectName(QString::fromUtf8("baudRate"));
        baudRate->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(baudRate, 1, 1, 1, 1);

        btnClear = new QPushButton(widget_8);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(btnClear, 5, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(widget_8);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        DI3 = new QLineEdit(widget_8);
        DI3->setObjectName(QString::fromUtf8("DI3"));

        verticalLayout_2->addWidget(DI3);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_11 = new QLabel(widget_8);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout->addWidget(label_11);

        recvData_2 = new QTextEdit(widget_8);
        recvData_2->setObjectName(QString::fromUtf8("recvData_2"));
        recvData_2->setFrameShadow(QFrame::Sunken);
        recvData_2->setReadOnly(false);

        verticalLayout->addWidget(recvData_2);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        open_xiebo = new QPushButton(widget_8);
        open_xiebo->setObjectName(QString::fromUtf8("open_xiebo"));

        horizontalLayout->addWidget(open_xiebo);

        close_xiebo = new QPushButton(widget_8);
        close_xiebo->setObjectName(QString::fromUtf8("close_xiebo"));

        horizontalLayout->addWidget(close_xiebo);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout_4->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_12 = new QLabel(widget_8);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        recvData = new QPlainTextEdit(widget_8);
        recvData->setObjectName(QString::fromUtf8("recvData"));
        recvData->setReadOnly(true);

        verticalLayout_4->addWidget(recvData);


        gridLayout_4->addLayout(verticalLayout_4, 0, 2, 1, 1);


        gridLayout_3->addWidget(widget_8, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 943, 23));
        menuasdfasdf = new QMenu(menubar);
        menuasdfasdf->setObjectName(QString::fromUtf8("menuasdfasdf"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuasdfasdf->menuAction());
        menuasdfasdf->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\351\200\232\344\277\241\350\275\257\344\273\266", nullptr));
        github->setText(QCoreApplication::translate("MainWindow", "github", nullptr));
        readMe->setText(QCoreApplication::translate("MainWindow", "README", nullptr));
        hexSend->setText(QCoreApplication::translate("MainWindow", "Hex\345\217\221\351\200\201", nullptr));
        charSend->setText(QCoreApplication::translate("MainWindow", "\345\255\227\347\254\246", nullptr));
        btnSend->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        stopBits->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        stopBits->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        charRecv->setText(QCoreApplication::translate("MainWindow", "\345\255\227\347\254\246\346\230\276\347\244\272", nullptr));
        openPort->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243 \357\274\232", nullptr));
        dataBits->setItemText(0, QCoreApplication::translate("MainWindow", "8", nullptr));
        dataBits->setItemText(1, QCoreApplication::translate("MainWindow", "7", nullptr));
        dataBits->setItemText(2, QCoreApplication::translate("MainWindow", "6", nullptr));

        parityBits->setItemText(0, QCoreApplication::translate("MainWindow", "\345\201\266\346\240\241\351\252\214", nullptr));
        parityBits->setItemText(1, QCoreApplication::translate("MainWindow", "\346\227\240", nullptr));
        parityBits->setItemText(2, QCoreApplication::translate("MainWindow", "\345\245\207\346\240\241\351\252\214", nullptr));

        hexRecv->setText(QCoreApplication::translate("MainWindow", "Hex\346\230\276\347\244\272", nullptr));
        baudRate->setItemText(0, QCoreApplication::translate("MainWindow", "2400", nullptr));
        baudRate->setItemText(1, QCoreApplication::translate("MainWindow", "115200", nullptr));
        baudRate->setItemText(2, QCoreApplication::translate("MainWindow", "38400", nullptr));
        baudRate->setItemText(3, QCoreApplication::translate("MainWindow", "28800", nullptr));
        baudRate->setItemText(4, QCoreApplication::translate("MainWindow", "19200", nullptr));
        baudRate->setItemText(5, QCoreApplication::translate("MainWindow", "9600", nullptr));
        baudRate->setItemText(6, QCoreApplication::translate("MainWindow", "4800", nullptr));

        btnClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\346\265\201\346\260\264\345\217\267", nullptr));
        DI3->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\212\245\346\226\207", nullptr));
        recvData_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p></body></html>", nullptr));
        open_xiebo->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\350\260\220\346\263\242\347\233\221\346\265\213", nullptr));
        close_xiebo->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\350\260\220\346\263\242\347\233\221\346\265\213", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\344\277\241\346\201\257", nullptr));
        menuasdfasdf->setTitle(QCoreApplication::translate("MainWindow", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
