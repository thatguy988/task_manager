/********************************************************************************
** Form generated from reading UI file 'create_account_page.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_ACCOUNT_PAGE_H
#define UI_CREATE_ACCOUNT_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_create_account_page
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *create_account_page)
    {
        if (create_account_page->objectName().isEmpty())
            create_account_page->setObjectName("create_account_page");
        create_account_page->resize(400, 300);
        widget = new QWidget(create_account_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 60, 201, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(create_account_page);

        QMetaObject::connectSlotsByName(create_account_page);
    } // setupUi

    void retranslateUi(QDialog *create_account_page)
    {
        create_account_page->setWindowTitle(QCoreApplication::translate("create_account_page", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("create_account_page", "New Username", nullptr));
        label_2->setText(QCoreApplication::translate("create_account_page", "New Password", nullptr));
        pushButton->setText(QCoreApplication::translate("create_account_page", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class create_account_page: public Ui_create_account_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_ACCOUNT_PAGE_H
