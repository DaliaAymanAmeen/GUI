/********************************************************************************
** Form generated from reading UI file 'features.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATURES_H
#define UI_FEATURES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Features
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *Prettifing;
    QPushButton *JSON;
    QPushButton *queries;

    void setupUi(QDialog *Features)
    {
        if (Features->objectName().isEmpty())
            Features->setObjectName(QString::fromUtf8("Features"));
        Features->resize(787, 600);
        widget = new QWidget(Features);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 50, 251, 311));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Prettifing = new QPushButton(widget);
        Prettifing->setObjectName(QString::fromUtf8("Prettifing"));

        verticalLayout->addWidget(Prettifing);

        JSON = new QPushButton(widget);
        JSON->setObjectName(QString::fromUtf8("JSON"));

        verticalLayout->addWidget(JSON);

        queries = new QPushButton(widget);
        queries->setObjectName(QString::fromUtf8("queries"));

        verticalLayout->addWidget(queries);


        retranslateUi(Features);

        QMetaObject::connectSlotsByName(Features);
    } // setupUi

    void retranslateUi(QDialog *Features)
    {
        Features->setWindowTitle(QCoreApplication::translate("Features", "Dialog", nullptr));
        Prettifing->setText(QCoreApplication::translate("Features", "Prettifing", nullptr));
        JSON->setText(QCoreApplication::translate("Features", "JSON", nullptr));
        queries->setText(QCoreApplication::translate("Features", "Queries ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Features: public Ui_Features {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATURES_H
