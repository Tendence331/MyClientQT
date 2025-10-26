/********************************************************************************
** Form generated from reading UI file 'registrationform.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONFORM_H
#define UI_REGISTRATIONFORM_H

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

class Ui_RegistrationForm
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *loginEdit;
    QLineEdit *passwordEdit;
    QLineEdit *confirmPasswordEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *RegistrationForm)
    {
        if (RegistrationForm->objectName().isEmpty())
            RegistrationForm->setObjectName("RegistrationForm");
        RegistrationForm->resize(395, 188);
        RegistrationForm->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 206, 197);"));
        verticalLayout = new QVBoxLayout(RegistrationForm);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label = new QLabel(RegistrationForm);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Tahoma\";"));

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        label_2 = new QLabel(RegistrationForm);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Tahoma\";"));

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_2);

        label_3 = new QLabel(RegistrationForm);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Tahoma\";"));

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        loginEdit = new QLineEdit(RegistrationForm);
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

        passwordEdit = new QLineEdit(RegistrationForm);
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

        confirmPasswordEdit = new QLineEdit(RegistrationForm);
        confirmPasswordEdit->setObjectName("confirmPasswordEdit");
        confirmPasswordEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;\n"
"border-width: 3px;\n"
"border-style: groove;\n"
"border-top-color: rgb(128, 128, 128);\n"
"border-left-color: rgb(128, 128, 128);\n"
"border-right-color: rgb(128, 128, 128);\n"
"border-bottom-color: rgb(212, 208, 200);\n"
"padding: 3px;\n"
"font: 14pt \"Tahoma\";"));

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, confirmPasswordEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        loginButton = new QPushButton(RegistrationForm);
        loginButton->setObjectName("loginButton");
        loginButton->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 206, 197);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-style: outset;\n"
"border-top-color: rgb(212, 208, 200);\n"
"border-left-color: rgb(212, 208, 200);\n"
"border-right-color: rgb(128, 128, 128);\n"
"border-bottom-color: rgb(128, 128, 128);\n"
"padding: 3px;\n"
"font: 14pt \"Tahoma\";"));

        horizontalLayout->addWidget(loginButton);

        buttonBox = new QDialogButtonBox(RegistrationForm);
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
"font: 14pt \"Tahoma\";"));
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        horizontalLayout->addWidget(buttonBox);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RegistrationForm);

        QMetaObject::connectSlotsByName(RegistrationForm);
    } // setupUi

    void retranslateUi(QWidget *RegistrationForm)
    {
        RegistrationForm->setWindowTitle(QCoreApplication::translate("RegistrationForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("RegistrationForm", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_2->setText(QCoreApplication::translate("RegistrationForm", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_3->setText(QCoreApplication::translate("RegistrationForm", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        loginButton->setText(QCoreApplication::translate("RegistrationForm", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationForm: public Ui_RegistrationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONFORM_H
