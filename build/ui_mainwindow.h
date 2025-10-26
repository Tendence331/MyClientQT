/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCreateNewClient;
    QAction *actionCloseClient;
    QAction *actionConnectServer;
    QAction *actionCloseServer;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLineEdit *ipEdit;
    QLabel *label_5;
    QLineEdit *portEdit;
    QPushButton *connectButtonTCP;
    QPushButton *disconnectButtonTCP;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *commonChatBrowser;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextBrowser *privateChatBrowser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *messagelineEdit;
    QPushButton *sendMessageButton;
    QPushButton *sendMessagePrivateButton;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 206, 197);\n"
""));
        actionCreateNewClient = new QAction(MainWindow);
        actionCreateNewClient->setObjectName("actionCreateNewClient");
        actionCloseClient = new QAction(MainWindow);
        actionCloseClient->setObjectName("actionCloseClient");
        actionConnectServer = new QAction(MainWindow);
        actionConnectServer->setObjectName("actionConnectServer");
        actionCloseServer = new QAction(MainWindow);
        actionCloseServer->setObjectName("actionCloseServer");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Tahoma\";"));

        horizontalLayout_3->addWidget(label_4);

        ipEdit = new QLineEdit(centralwidget);
        ipEdit->setObjectName("ipEdit");
        ipEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;\n"
"border-width: 3px;\n"
"border-style: groove;\n"
"border-top-color: rgb(128, 128, 128);\n"
"border-left-color: rgb(128, 128, 128);\n"
"border-right-color: rgb(128, 128, 128);\n"
"border-bottom-color: rgb(212, 208, 200);\n"
"padding: 3px;\n"
"font: 14pt \"Tahoma\";"));

        horizontalLayout_3->addWidget(ipEdit);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Tahoma\";"));

        horizontalLayout_3->addWidget(label_5);

        portEdit = new QLineEdit(centralwidget);
        portEdit->setObjectName("portEdit");
        portEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;\n"
"border-width: 3px;\n"
"border-style: groove;\n"
"border-top-color: rgb(128, 128, 128);\n"
"border-left-color: rgb(128, 128, 128);\n"
"border-right-color: rgb(128, 128, 128);\n"
"border-bottom-color: rgb(212, 208, 200);\n"
"padding: 3px;\n"
"font: 14pt \"Tahoma\";"));

        horizontalLayout_3->addWidget(portEdit);

        connectButtonTCP = new QPushButton(centralwidget);
        connectButtonTCP->setObjectName("connectButtonTCP");
        connectButtonTCP->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 206, 197);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-style: outset;\n"
"border-top-color: rgb(212, 208, 200);\n"
"border-left-color: rgb(212, 208, 200);\n"
"border-right-color: rgb(128, 128, 128);\n"
"border-bottom-color: rgb(128, 128, 128);\n"
"padding: 3px;\n"
"font: 14pt \"Tahoma\";\n"
""));

        horizontalLayout_3->addWidget(connectButtonTCP);

        disconnectButtonTCP = new QPushButton(centralwidget);
        disconnectButtonTCP->setObjectName("disconnectButtonTCP");
        disconnectButtonTCP->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 206, 197);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-style: outset;\n"
"border-top-color: rgb(212, 208, 200);\n"
"border-left-color: rgb(212, 208, 200);\n"
"border-right-color: rgb(128, 128, 128);\n"
"border-bottom-color: rgb(128, 128, 128);\n"
"padding: 3px;\n"
"font: 14pt \"Tahoma\";\n"
""));

        horizontalLayout_3->addWidget(disconnectButtonTCP);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Tahoma\";"));

        verticalLayout->addWidget(label);

        commonChatBrowser = new QTextBrowser(centralwidget);
        commonChatBrowser->setObjectName("commonChatBrowser");
        commonChatBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;\n"
"border-width: 3px;\n"
"border-style: groove;\n"
"border-top-color: rgb(128, 128, 128);\n"
"border-left-color: rgb(128, 128, 128);\n"
"border-right-color: rgb(128, 128, 128);\n"
"border-bottom-color: rgb(212, 208, 200);\n"
"padding: 2px;\n"
"font: 14pt \"Tahoma\";"));

        verticalLayout->addWidget(commonChatBrowser);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Tahoma\";"));

        verticalLayout_2->addWidget(label_2);

        privateChatBrowser = new QTextBrowser(centralwidget);
        privateChatBrowser->setObjectName("privateChatBrowser");
        privateChatBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;\n"
"border-width: 3px;\n"
"border-style: groove;\n"
"border-top-color: rgb(128, 128, 128);\n"
"border-left-color: rgb(128, 128, 128);\n"
"border-right-color: rgb(128, 128, 128);\n"
"border-bottom-color: rgb(212, 208, 200);\n"
"padding: 2px;\n"
"font: 14pt \"Tahoma\";"));

        verticalLayout_2->addWidget(privateChatBrowser);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Tahoma\";"));

        horizontalLayout_2->addWidget(label_3);

        messagelineEdit = new QLineEdit(centralwidget);
        messagelineEdit->setObjectName("messagelineEdit");
        messagelineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;\n"
"border-width: 3px;\n"
"border-style: groove;\n"
"border-top-color: rgb(128, 128, 128);\n"
"border-left-color: rgb(128, 128, 128);\n"
"border-right-color: rgb(128, 128, 128);\n"
"border-bottom-color: rgb(212, 208, 200);\n"
"padding: 3px;\n"
"font: 14pt \"Tahoma\";"));

        horizontalLayout_2->addWidget(messagelineEdit);

        sendMessageButton = new QPushButton(centralwidget);
        sendMessageButton->setObjectName("sendMessageButton");
        sendMessageButton->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 206, 197);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-style: outset;\n"
"border-top-color: rgb(212, 208, 200);\n"
"border-left-color: rgb(212, 208, 200);\n"
"border-right-color: rgb(128, 128, 128);\n"
"border-bottom-color: rgb(128, 128, 128);\n"
"padding: 3px;\n"
"font: 14pt \"Tahoma\";\n"
""));

        horizontalLayout_2->addWidget(sendMessageButton);

        sendMessagePrivateButton = new QPushButton(centralwidget);
        sendMessagePrivateButton->setObjectName("sendMessagePrivateButton");
        sendMessagePrivateButton->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 206, 197);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-style: outset;\n"
"border-top-color: rgb(212, 208, 200);\n"
"border-left-color: rgb(212, 208, 200);\n"
"border-right-color: rgb(128, 128, 128);\n"
"border-bottom-color: rgb(128, 128, 128);\n"
"padding: 3px;\n"
"font: 14pt \"Tahoma\";\n"
""));

        horizontalLayout_2->addWidget(sendMessagePrivateButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
        font.setPointSize(14);
        font.setBold(true);
        statusbar->setFont(font);
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionCreateNewClient);
        menuMenu->addAction(actionCloseClient);
        menuMenu->addAction(actionConnectServer);
        menuMenu->addAction(actionCloseServer);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCreateNewClient->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\320\276\320\263\320\276 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        actionCloseClient->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\272\320\273\320\270\320\265\320\275\321\202", nullptr));
        actionConnectServer->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214\321\201\321\217 \321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\276\320\274", nullptr));
        actionCloseServer->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217 \320\276\321\202 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "IP:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "PORT:", nullptr));
        connectButtonTCP->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        disconnectButtonTCP->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\270\320\271 \321\207\320\260\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\233\320\270\321\207\320\275\321\213\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265", nullptr));
        sendMessageButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\262\321\201\320\265\320\274", nullptr));
        sendMessagePrivateButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\273\320\270\321\207\320\275\320\276", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
