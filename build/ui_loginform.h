/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *loginEdit;
    QLineEdit *passwordEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *registrationPushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName("LoginForm");
        LoginForm->resize(367, 168);
        LoginForm->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 206, 197);"));
        verticalLayout = new QVBoxLayout(LoginForm);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label = new QLabel(LoginForm);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Tahoma\";"));

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        label_2 = new QLabel(LoginForm);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Tahoma\";"));

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        loginEdit = new QLineEdit(LoginForm);
        loginEdit->setObjectName("loginEdit");
        loginEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;\n"
"border-width: 3px;\n"
"border-style: groove;\n"
"border-top-color: rgb(128, 128, 128);\n"
"border-left-color: rgb(128, 128, 128);\n"
"border-right-color: rgb(128, 128, 128);\n"
"border-bottom-color: rgb(212, 208, 200);\n"
"padding: 3px;\n"
"font: 14pt \"Tahoma\";"));

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, loginEdit);

        passwordEdit = new QLineEdit(LoginForm);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;\n"
"border-width: 3px;\n"
"border-style: groove;\n"
"border-top-color: rgb(128, 128, 128);\n"
"border-left-color: rgb(128, 128, 128);\n"
"border-right-color: rgb(128, 128, 128);\n"
"border-bottom-color: rgb(212, 208, 200);\n"
"padding: 3px;\n"
"font: 14pt \"Tahoma\";"));

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, passwordEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        registrationPushButton = new QPushButton(LoginForm);
        registrationPushButton->setObjectName("registrationPushButton");
        registrationPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 206, 197);\n"
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

        horizontalLayout->addWidget(registrationPushButton);

        buttonBox = new QDialogButtonBox(LoginForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 206, 197);\n"
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
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        horizontalLayout->addWidget(buttonBox);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("LoginForm", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_2->setText(QCoreApplication::translate("LoginForm", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        registrationPushButton->setText(QCoreApplication::translate("LoginForm", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
