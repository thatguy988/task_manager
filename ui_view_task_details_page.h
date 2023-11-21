/********************************************************************************
** Form generated from reading UI file 'view_task_details_page.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_TASK_DETAILS_PAGE_H
#define UI_VIEW_TASK_DETAILS_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_view_task_details_page
{
public:
    QLabel *label;
    QPushButton *backButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QTextEdit *descriptionTextEdit;
    QLabel *titleLabel;
    QLabel *dateLabel;
    QLabel *priorityLabel;
    QLabel *timeLabel;

    void setupUi(QDialog *view_task_details_page)
    {
        if (view_task_details_page->objectName().isEmpty())
            view_task_details_page->setObjectName("view_task_details_page");
        view_task_details_page->resize(400, 300);
        label = new QLabel(view_task_details_page);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 91, 20));
        backButton = new QPushButton(view_task_details_page);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(240, 260, 80, 24));
        editButton = new QPushButton(view_task_details_page);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(40, 260, 80, 24));
        deleteButton = new QPushButton(view_task_details_page);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(140, 260, 80, 24));
        descriptionTextEdit = new QTextEdit(view_task_details_page);
        descriptionTextEdit->setObjectName("descriptionTextEdit");
        descriptionTextEdit->setGeometry(QRect(40, 160, 291, 70));
        descriptionTextEdit->setReadOnly(true);
        titleLabel = new QLabel(view_task_details_page);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 40, 111, 16));
        dateLabel = new QLabel(view_task_details_page);
        dateLabel->setObjectName("dateLabel");
        dateLabel->setGeometry(QRect(60, 70, 111, 16));
        priorityLabel = new QLabel(view_task_details_page);
        priorityLabel->setObjectName("priorityLabel");
        priorityLabel->setGeometry(QRect(60, 100, 131, 16));
        timeLabel = new QLabel(view_task_details_page);
        timeLabel->setObjectName("timeLabel");
        timeLabel->setGeometry(QRect(60, 130, 121, 16));

        retranslateUi(view_task_details_page);

        QMetaObject::connectSlotsByName(view_task_details_page);
    } // setupUi

    void retranslateUi(QDialog *view_task_details_page)
    {
        view_task_details_page->setWindowTitle(QCoreApplication::translate("view_task_details_page", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("view_task_details_page", "View Details", nullptr));
        backButton->setText(QCoreApplication::translate("view_task_details_page", "Back", nullptr));
        editButton->setText(QCoreApplication::translate("view_task_details_page", "Edit", nullptr));
        deleteButton->setText(QCoreApplication::translate("view_task_details_page", "Delete", nullptr));
        titleLabel->setText(QCoreApplication::translate("view_task_details_page", "TextLabel", nullptr));
        dateLabel->setText(QCoreApplication::translate("view_task_details_page", "TextLabel", nullptr));
        priorityLabel->setText(QCoreApplication::translate("view_task_details_page", "TextLabel", nullptr));
        timeLabel->setText(QCoreApplication::translate("view_task_details_page", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view_task_details_page: public Ui_view_task_details_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_TASK_DETAILS_PAGE_H
