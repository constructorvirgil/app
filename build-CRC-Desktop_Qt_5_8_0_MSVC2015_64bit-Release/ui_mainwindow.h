/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "comboxpro.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QWidget *centralWidget;
    QPushButton *pushButton_copy;
    QTextEdit *textEdit_crc;
    QPushButton *pushButton_clear;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    ComboxPro *comboBox_pro;
    QLabel *label_2;
    QLineEdit *lineEdit_init;
    QLabel *label_3;
    QLineEdit *lineEdit_endXor;
    QLabel *label_4;
    QLineEdit *lineEdit_isToggle;
    QLabel *label;
    QPushButton *pushButton_cre;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(579, 605);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_copy = new QPushButton(centralWidget);
        pushButton_copy->setObjectName(QStringLiteral("pushButton_copy"));
        pushButton_copy->setGeometry(QRect(440, 210, 93, 28));
        textEdit_crc = new QTextEdit(centralWidget);
        textEdit_crc->setObjectName(QStringLiteral("textEdit_crc"));
        textEdit_crc->setGeometry(QRect(20, 130, 401, 401));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(440, 260, 93, 28));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 255, 107));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_pro = new ComboxPro(layoutWidget);
        comboBox_pro->setObjectName(QStringLiteral("comboBox_pro"));

        gridLayout->addWidget(comboBox_pro, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_init = new QLineEdit(layoutWidget);
        lineEdit_init->setObjectName(QStringLiteral("lineEdit_init"));
        lineEdit_init->setEnabled(false);

        gridLayout->addWidget(lineEdit_init, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_endXor = new QLineEdit(layoutWidget);
        lineEdit_endXor->setObjectName(QStringLiteral("lineEdit_endXor"));
        lineEdit_endXor->setEnabled(false);

        gridLayout->addWidget(lineEdit_endXor, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_isToggle = new QLineEdit(layoutWidget);
        lineEdit_isToggle->setObjectName(QStringLiteral("lineEdit_isToggle"));
        lineEdit_isToggle->setEnabled(false);

        gridLayout->addWidget(lineEdit_isToggle, 3, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton_cre = new QPushButton(centralWidget);
        pushButton_cre->setObjectName(QStringLiteral("pushButton_cre"));
        pushButton_cre->setGeometry(QRect(440, 160, 93, 28));
        MainWindow->setCentralWidget(centralWidget);
        pushButton_copy->raise();
        textEdit_crc->raise();
        pushButton_clear->raise();
        layoutWidget->raise();
        pushButton_cre->raise();
        label->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 579, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionAbout);

        retranslateUi(MainWindow);

        comboBox_pro->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CRC\350\241\250\347\224\237\346\210\220\345\231\250", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", Q_NULLPTR));
        pushButton_copy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", Q_NULLPTR));
        comboBox_pro->setCurrentText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\200\274", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\347\273\223\346\236\234\345\274\202\346\210\226\345\200\274", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\347\277\273\350\275\254", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\345\215\217\350\256\256", Q_NULLPTR));
        pushButton_cre->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
