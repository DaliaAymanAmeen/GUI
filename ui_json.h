/********************************************************************************
** Form generated from reading UI file 'json.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JSON_H
#define UI_JSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_JSON
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *JSON)
    {
        if (JSON->objectName().isEmpty())
            JSON->setObjectName(QString::fromUtf8("JSON"));
        JSON->resize(544, 370);
        verticalLayout_2 = new QVBoxLayout(JSON);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(JSON);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        pushButton = new QPushButton(JSON);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(JSON);

        QMetaObject::connectSlotsByName(JSON);
    } // setupUi

    void retranslateUi(QDialog *JSON)
    {
        JSON->setWindowTitle(QCoreApplication::translate("JSON", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("JSON", "JSON File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JSON: public Ui_JSON {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JSON_H
