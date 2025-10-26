/********************************************************************************
** Form generated from reading UI file 'connectserverdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTSERVERDIALOG_H
#define UI_CONNECTSERVERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConnectServerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *ipEdit;
    QLineEdit *portEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *connectButton;

    void setupUi(QDialog *ConnectServerDialog)
    {
        if (ConnectServerDialog->objectName().isEmpty())
            ConnectServerDialog->setObjectName("ConnectServerDialog");
        ConnectServerDialog->resize(390, 159);
        ConnectServerDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 206, 197);\n"
""));
        verticalLayout = new QVBoxLayout(ConnectServerDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(ConnectServerDialog);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Tahoma\";"));

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        label_2 = new QLabel(ConnectServerDialog);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Tahoma\";"));

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        ipEdit = new QLineEdit(ConnectServerDialog);
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

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, ipEdit);

        portEdit = new QLineEdit(ConnectServerDialog);
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

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, portEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        cancelButton = new QPushButton(ConnectServerDialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 206, 197);\n"
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

        horizontalLayout->addWidget(cancelButton);

        connectButton = new QPushButton(ConnectServerDialog);
        connectButton->setObjectName("connectButton");
        connectButton->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 206, 197);\n"
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

        horizontalLayout->addWidget(connectButton);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ConnectServerDialog);

        QMetaObject::connectSlotsByName(ConnectServerDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectServerDialog)
    {
        ConnectServerDialog->setWindowTitle(QCoreApplication::translate("ConnectServerDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ConnectServerDialog", "IP:", nullptr));
        label_2->setText(QCoreApplication::translate("ConnectServerDialog", "Port:", nullptr));
        cancelButton->setText(QCoreApplication::translate("ConnectServerDialog", "Cancel", nullptr));
        connectButton->setText(QCoreApplication::translate("ConnectServerDialog", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectServerDialog: public Ui_ConnectServerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTSERVERDIALOG_H
