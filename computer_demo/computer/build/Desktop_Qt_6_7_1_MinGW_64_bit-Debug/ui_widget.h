/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_view;
    QGridLayout *gridLayout;
    QPushButton *pushButton_num1_6;
    QPushButton *pushButton_num0;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_num4;
    QPushButton *pushButton_multi;
    QPushButton *pushButton_divid;
    QPushButton *pushButton_add;
    QPushButton *pushButton_num7;
    QPushButton *pushButton_res;
    QPushButton *pushButton_num6;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_num8;
    QPushButton *pushButton_num9;
    QPushButton *pushButton_num3;
    QPushButton *pushButton_num2;
    QPushButton *pushButton_num5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(421, 371);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 381, 331));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_view = new QLineEdit(layoutWidget);
        lineEdit_view->setObjectName("lineEdit_view");

        verticalLayout->addWidget(lineEdit_view);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton_num1_6 = new QPushButton(layoutWidget);
        pushButton_num1_6->setObjectName("pushButton_num1_6");
        pushButton_num1_6->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_num1_6, 2, 0, 1, 1);

        pushButton_num0 = new QPushButton(layoutWidget);
        pushButton_num0->setObjectName("pushButton_num0");
        pushButton_num0->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_num0, 3, 1, 1, 1);

        pushButton_sub = new QPushButton(layoutWidget);
        pushButton_sub->setObjectName("pushButton_sub");
        pushButton_sub->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_sub, 1, 3, 1, 1);

        pushButton_num4 = new QPushButton(layoutWidget);
        pushButton_num4->setObjectName("pushButton_num4");
        pushButton_num4->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_num4, 1, 0, 1, 1);

        pushButton_multi = new QPushButton(layoutWidget);
        pushButton_multi->setObjectName("pushButton_multi");
        pushButton_multi->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_multi, 2, 3, 1, 1);

        pushButton_divid = new QPushButton(layoutWidget);
        pushButton_divid->setObjectName("pushButton_divid");
        pushButton_divid->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_divid, 3, 2, 1, 1);

        pushButton_add = new QPushButton(layoutWidget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_add, 0, 3, 1, 1);

        pushButton_num7 = new QPushButton(layoutWidget);
        pushButton_num7->setObjectName("pushButton_num7");
        pushButton_num7->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_num7, 0, 0, 1, 1);

        pushButton_res = new QPushButton(layoutWidget);
        pushButton_res->setObjectName("pushButton_res");
        pushButton_res->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_res, 3, 3, 1, 1);

        pushButton_num6 = new QPushButton(layoutWidget);
        pushButton_num6->setObjectName("pushButton_num6");
        pushButton_num6->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_num6, 1, 2, 1, 1);

        pushButton_delete = new QPushButton(layoutWidget);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_delete, 3, 0, 1, 1);

        pushButton_num8 = new QPushButton(layoutWidget);
        pushButton_num8->setObjectName("pushButton_num8");
        pushButton_num8->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_num8, 0, 1, 1, 1);

        pushButton_num9 = new QPushButton(layoutWidget);
        pushButton_num9->setObjectName("pushButton_num9");
        pushButton_num9->setIconSize(QSize(50, 20));

        gridLayout->addWidget(pushButton_num9, 0, 2, 1, 1);

        pushButton_num3 = new QPushButton(layoutWidget);
        pushButton_num3->setObjectName("pushButton_num3");
        pushButton_num3->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_num3, 2, 2, 1, 1);

        pushButton_num2 = new QPushButton(layoutWidget);
        pushButton_num2->setObjectName("pushButton_num2");
        pushButton_num2->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_num2, 2, 1, 1, 1);

        pushButton_num5 = new QPushButton(layoutWidget);
        pushButton_num5->setObjectName("pushButton_num5");
        pushButton_num5->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton_num5, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\350\256\241\347\256\227\345\231\250", nullptr));
        pushButton_num1_6->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton_num0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("Widget", "-", nullptr));
        pushButton_num4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pushButton_multi->setText(QCoreApplication::translate("Widget", "*", nullptr));
        pushButton_divid->setText(QCoreApplication::translate("Widget", "/", nullptr));
        pushButton_add->setText(QCoreApplication::translate("Widget", "+", nullptr));
        pushButton_num7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        pushButton_res->setText(QCoreApplication::translate("Widget", "=", nullptr));
        pushButton_num6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
        pushButton_num8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        pushButton_num9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        pushButton_num3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        pushButton_num2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        pushButton_num5->setText(QCoreApplication::translate("Widget", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
