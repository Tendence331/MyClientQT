/********************************************************************************
** Form generated from reading UI file 'connectserverform.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTSERVERFORM_H
#define UI_CONNECTSERVERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectServerForm
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *ipEdit;
    QLineEdit *portEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;
    QPushButton *connectToServerButton;

    void setupUi(QWidget *ConnectServerForm)
    {
        if (ConnectServerForm->objectName().isEmpty())
            ConnectServerForm->setObjectName("ConnectServerForm");
        ConnectServerForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(ConnectServerForm);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(ConnectServerForm);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        label_2 = new QLabel(ConnectServerForm);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        ipEdit = new QLineEdit(ConnectServerForm);
        ipEdit->setObjectName("ipEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, ipEdit);

        portEdit = new QLineEdit(ConnectServerForm);
        portEdit->setObjectName("portEdit");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, portEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(ConnectServerForm);
        closeButton->setObjectName("closeButton");

        horizontalLayout->addWidget(closeButton);

        connectToServerButton = new QPushButton(ConnectServerForm);
        connectToServerButton->setObjectName("connectToServerButton");

        horizontalLayout->addWidget(connectToServerButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ConnectServerForm);

        QMetaObject::connectSlotsByName(ConnectServerForm);
    } // setupUi

    void retranslateUi(QWidget *ConnectServerForm)
    {
        ConnectServerForm->setWindowTitle(QCoreApplication::translate("ConnectServerForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("ConnectServerForm", "IP:", nullptr));
        label_2->setText(QCoreApplication::translate("ConnectServerForm", "Port:", nullptr));
        closeButton->setText(QCoreApplication::translate("ConnectServerForm", "Close", nullptr));
        connectToServerButton->setText(QCoreApplication::translate("ConnectServerForm", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectServerForm: public Ui_ConnectServerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTSERVERFORM_H
