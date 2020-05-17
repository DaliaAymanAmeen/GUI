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
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Features
{
public:
    QLabel *label;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Features)
    {
        if (Features->objectName().isEmpty())
            Features->setObjectName(QString::fromUtf8("Features"));
        Features->resize(787, 600);
        label = new QLabel(Features);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 251, 20));
        toolButton = new QToolButton(Features);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(530, 140, 251, 211));
        toolButton->setMinimumSize(QSize(251, 0));
        toolButton->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/img/img/jar-file.png);"));
        toolButton_2 = new QToolButton(Features);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(310, 140, 191, 231));
        toolButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/file.png);"));
        toolButton_3 = new QToolButton(Features);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setGeometry(QRect(20, 170, 201, 181));
        toolButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/document.png);"));
        label_2 = new QLabel(Features);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 370, 161, 51));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(Features);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 370, 161, 51));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(Features);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(580, 370, 161, 51));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(Features);

        QMetaObject::connectSlotsByName(Features);
    } // setupUi

    void retranslateUi(QDialog *Features)
    {
        Features->setWindowTitle(QCoreApplication::translate("Features", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Features", "Features:", nullptr));
        toolButton->setText(QString());
        toolButton_2->setText(QString());
        toolButton_3->setText(QString());
        label_2->setText(QCoreApplication::translate("Features", "    Error correction & Formatting", nullptr));
        label_3->setText(QCoreApplication::translate("Features", "                    Queries ", nullptr));
        label_4->setText(QCoreApplication::translate("Features", "            Convert to JSON", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Features: public Ui_Features {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATURES_H
