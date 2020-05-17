/********************************************************************************
** Form generated from reading UI file 'prettifing.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRETTIFING_H
#define UI_PRETTIFING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Prettifing
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *fromatting_2;
    QPushButton *fromatting;

    void setupUi(QDialog *Prettifing)
    {
        if (Prettifing->objectName().isEmpty())
            Prettifing->setObjectName(QString::fromUtf8("Prettifing"));
        Prettifing->resize(679, 511);
        verticalLayout_2 = new QVBoxLayout(Prettifing);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        fromatting_2 = new QPlainTextEdit(Prettifing);
        fromatting_2->setObjectName(QString::fromUtf8("fromatting_2"));

        verticalLayout->addWidget(fromatting_2);

        fromatting = new QPushButton(Prettifing);
        fromatting->setObjectName(QString::fromUtf8("fromatting"));

        verticalLayout->addWidget(fromatting);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Prettifing);

        QMetaObject::connectSlotsByName(Prettifing);
    } // setupUi

    void retranslateUi(QDialog *Prettifing)
    {
        Prettifing->setWindowTitle(QCoreApplication::translate("Prettifing", "Dialog", nullptr));
        fromatting->setText(QCoreApplication::translate("Prettifing", "Prettifing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Prettifing: public Ui_Prettifing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRETTIFING_H
