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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Features
{
public:
    QLabel *label;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;

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
        pushButton = new QPushButton(Features);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 390, 161, 41));
        pushButton_2 = new QPushButton(Features);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 390, 161, 41));
        pushButton_4 = new QPushButton(Features);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 390, 161, 41));

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
        pushButton->setText(QCoreApplication::translate("Features", " Error Correction And Prettifing", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Features", " Queries ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Features", "Convert To JSON", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Features: public Ui_Features {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATURES_H
