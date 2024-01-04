#ifndef INPUT_FACE_H
#define INPUT_FACE_H

#include <QWidget>

#include"my_camera.h"


class my_dlib;

namespace Ui {
class input_face;
}

class input_face : public QWidget
{
    Q_OBJECT

public:
    explicit input_face(QWidget *parent = nullptr);
    ~input_face();


private:
    void save_face_to_jpg();

private slots:
    void on_pushButton_take_clicked();

    void on_pushButton_sureName_clicked();

    void on_pushButton_save_clicked();

private:
    Ui::input_face *ui;

    my_camera *ca;      //摄像头模块

    QVector<cv::Mat> face_list;

    unsigned int take_pic_nums = 0;
    unsigned int Person_nums = 0;
    QString path = "D:/data";
    QString face_name;



    QTimer *timer;
};

#endif // INPUT_FACE_H
