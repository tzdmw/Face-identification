/********************************************************************************
** Form generated from reading UI file 'input_face.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_FACE_H
#define UI_INPUT_FACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_input_face
{
public:
    QWidget *widget;
    QLabel *cam_input;
    QWidget *widget_2;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_fps;
    QLabel *label_FaceInDatabase;
    QLabel *label_FaceInNow;
    QLabel *label_4;
    QPushButton *pushButton_take;
    QLabel *label_5;
    QLineEdit *lineEdit_name;
    QLabel *label_6;
    QPushButton *pushButton_sureName;
    QLabel *label_7;
    QPushButton *pushButton_save;
    QLabel *label_output_info;
    QLabel *label_showNums;

    void setupUi(QWidget *input_face)
    {
        if (input_face->objectName().isEmpty())
            input_face->setObjectName("input_face");
        input_face->resize(1080, 720);
        widget = new QWidget(input_face);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(6, 6, 691, 708));
        widget->setStyleSheet(QString::fromUtf8("\n"
"\n"
"#widget{\n"
"	border:3px solid blue\n"
"\n"
"}"));
        cam_input = new QLabel(widget);
        cam_input->setObjectName("cam_input");
        cam_input->setGeometry(QRect(0, 0, 691, 711));
        widget_2 = new QWidget(input_face);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(703, 6, 371, 708));
        widget_2->setStyleSheet(QString::fromUtf8("#widget_2{\n"
"	border:3px solid blue\n"
"}\n"
""));
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 351, 221));
        groupBox->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 50, 211, 31));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 211, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 160, 241, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));
        label_fps = new QLabel(groupBox);
        label_fps->setObjectName("label_fps");
        label_fps->setGeometry(QRect(280, 50, 61, 31));
        label_fps->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));
        label_FaceInDatabase = new QLabel(groupBox);
        label_FaceInDatabase->setObjectName("label_FaceInDatabase");
        label_FaceInDatabase->setGeometry(QRect(280, 100, 61, 31));
        label_FaceInDatabase->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));
        label_FaceInNow = new QLabel(groupBox);
        label_FaceInNow->setObjectName("label_FaceInNow");
        label_FaceInNow->setGeometry(QRect(280, 160, 61, 31));
        label_FaceInNow->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 240, 341, 41));
        label_4->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));
        pushButton_take = new QPushButton(widget_2);
        pushButton_take->setObjectName("pushButton_take");
        pushButton_take->setGeometry(QRect(20, 300, 141, 41));
        pushButton_take->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 370, 331, 41));
        label_5->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));
        lineEdit_name = new QLineEdit(widget_2);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(80, 430, 191, 41));
        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 420, 81, 61));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));
        pushButton_sureName = new QPushButton(widget_2);
        pushButton_sureName->setObjectName("pushButton_sureName");
        pushButton_sureName->setGeometry(QRect(280, 430, 81, 41));
        pushButton_sureName->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 500, 341, 41));
        label_7->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));
        pushButton_save = new QPushButton(widget_2);
        pushButton_save->setObjectName("pushButton_save");
        pushButton_save->setGeometry(QRect(20, 570, 251, 51));
        pushButton_save->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));
        label_output_info = new QLabel(widget_2);
        label_output_info->setObjectName("label_output_info");
        label_output_info->setGeometry(QRect(20, 670, 341, 16));
        label_showNums = new QLabel(widget_2);
        label_showNums->setObjectName("label_showNums");
        label_showNums->setGeometry(QRect(230, 300, 111, 41));

        retranslateUi(input_face);

        QMetaObject::connectSlotsByName(input_face);
    } // setupUi

    void retranslateUi(QWidget *input_face)
    {
        input_face->setWindowTitle(QCoreApplication::translate("input_face", "Form", nullptr));
        cam_input->setText(QCoreApplication::translate("input_face", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("input_face", "\350\204\270\351\203\250\346\266\210\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("input_face", "Fps:", nullptr));
        label_2->setText(QCoreApplication::translate("input_face", "Face in database\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("input_face", "Face in current time:", nullptr));
        label_fps->setText(QCoreApplication::translate("input_face", "**", nullptr));
        label_FaceInDatabase->setText(QCoreApplication::translate("input_face", "**", nullptr));
        label_FaceInNow->setText(QCoreApplication::translate("input_face", "**", nullptr));
        label_4->setText(QCoreApplication::translate("input_face", "\347\254\254\344\270\200\346\255\245\357\274\232\351\200\211\346\213\251\347\205\247\347\211\207", nullptr));
        pushButton_take->setText(QCoreApplication::translate("input_face", "\346\213\215\347\205\247", nullptr));
        label_5->setText(QCoreApplication::translate("input_face", "\347\254\254\344\272\214\346\255\245\357\274\232\350\276\223\345\205\245\345\247\223\345\220\215", nullptr));
        label_6->setText(QCoreApplication::translate("input_face", "\345\247\223\345\220\215\357\274\232", nullptr));
        pushButton_sureName->setText(QCoreApplication::translate("input_face", "\347\241\256\350\256\244", nullptr));
        label_7->setText(QCoreApplication::translate("input_face", "\347\254\254\344\270\211\346\255\245\357\274\232\344\277\235\345\255\230\350\204\270\351\203\250\344\277\241\346\201\257", nullptr));
        pushButton_save->setText(QCoreApplication::translate("input_face", "\344\277\235\345\255\230\350\204\270\351\203\250\344\277\241\346\201\257", nullptr));
        label_output_info->setText(QCoreApplication::translate("input_face", "ouput_info", nullptr));
        label_showNums->setText(QCoreApplication::translate("input_face", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class input_face: public Ui_input_face {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT_FACE_H
