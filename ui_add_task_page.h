/********************************************************************************
** Form generated from reading UI file 'add_task_page.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_TASK_PAGE_H
#define UI_ADD_TASK_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_task_page
{
public:
    QLabel *label;
    QPushButton *cancelButton;
    QPushButton *addButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *PriorityspinBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *TitlelineEdit;
    QTextEdit *DescriptiontextEdit;
    QTimeEdit *timeEdit;

    void setupUi(QDialog *add_task_page)
    {
        if (add_task_page->objectName().isEmpty())
            add_task_page->setObjectName("add_task_page");
        add_task_page->resize(400, 300);
        label = new QLabel(add_task_page);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 111, 20));
        cancelButton = new QPushButton(add_task_page);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(120, 270, 91, 24));
        addButton = new QPushButton(add_task_page);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(40, 270, 80, 24));
        layoutWidget = new QWidget(add_task_page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 40, 325, 211));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        PriorityspinBox = new QSpinBox(layoutWidget);
        PriorityspinBox->setObjectName("PriorityspinBox");

        gridLayout->addWidget(PriorityspinBox, 2, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        TitlelineEdit = new QLineEdit(layoutWidget);
        TitlelineEdit->setObjectName("TitlelineEdit");

        gridLayout->addWidget(TitlelineEdit, 0, 1, 1, 1);

        DescriptiontextEdit = new QTextEdit(layoutWidget);
        DescriptiontextEdit->setObjectName("DescriptiontextEdit");

        gridLayout->addWidget(DescriptiontextEdit, 1, 1, 1, 1);

        timeEdit = new QTimeEdit(layoutWidget);
        timeEdit->setObjectName("timeEdit");

        gridLayout->addWidget(timeEdit, 3, 1, 1, 1);


        retranslateUi(add_task_page);

        QMetaObject::connectSlotsByName(add_task_page);
    } // setupUi

    void retranslateUi(QDialog *add_task_page)
    {
        add_task_page->setWindowTitle(QCoreApplication::translate("add_task_page", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("add_task_page", "Add Task", nullptr));
        cancelButton->setText(QCoreApplication::translate("add_task_page", "Canel", nullptr));
        addButton->setText(QCoreApplication::translate("add_task_page", "Add", nullptr));
        label_3->setText(QCoreApplication::translate("add_task_page", "Description", nullptr));
        label_4->setText(QCoreApplication::translate("add_task_page", "Priority", nullptr));
        label_5->setText(QCoreApplication::translate("add_task_page", "Time", nullptr));
        label_2->setText(QCoreApplication::translate("add_task_page", "Title", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_task_page: public Ui_add_task_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_TASK_PAGE_H
