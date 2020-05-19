/********************************************************************************
** Form generated from reading UI file 'queries.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERIES_H
#define UI_QUERIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Queries
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Queries)
    {
        if (Queries->objectName().isEmpty())
            Queries->setObjectName(QString::fromUtf8("Queries"));
        Queries->resize(787, 600);
        pushButton = new QPushButton(Queries);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 20, 141, 51));
        textEdit = new QTextEdit(Queries);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(450, 20, 151, 51));
        textEdit_2 = new QTextEdit(Queries);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(210, 230, 141, 251));
        textEdit_3 = new QTextEdit(Queries);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(460, 230, 141, 251));
        widget = new QWidget(Queries);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(460, 130, 141, 81));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        widget1 = new QWidget(Queries);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(210, 130, 141, 81));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Queries);

        QMetaObject::connectSlotsByName(Queries);
    } // setupUi

    void retranslateUi(QDialog *Queries)
    {
        Queries->setWindowTitle(QCoreApplication::translate("Queries", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Queries", "Number of synsets", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Queries", "Hypernyms", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Queries", "Definition", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Queries: public Ui_Queries {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERIES_H
