/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *take;
    QLabel *cam;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1080, 720);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #000000;\n"
"	border-radius: 30px;\n"
"    padding: 40px;\n"
"}\n"
"\n"
"QMainWindow::title {\n"
"    background-color: #000000;\n"
"    color: #ffffff;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        take = new QPushButton(centralwidget);
        take->setObjectName("take");
        take->setGeometry(QRect(910, 270, 150, 150));
        take->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-width:1px;\n"
"    border-radius:65px;\n"
"	background-color: #ffffff;\n"
" }\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon/camera.ico"), QSize(), QIcon::Normal, QIcon::Off);
        take->setIcon(icon);
        take->setIconSize(QSize(140, 140));
        cam = new QLabel(centralwidget);
        cam->setObjectName("cam");
        cam->setGeometry(QRect(10, 10, 881, 701));
        cam->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    padding: 0px;\n"
"    background-color: #FFFFFF;\n"
"    border: 2px solid #87CEFA;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        take->setText(QString());
        cam->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
