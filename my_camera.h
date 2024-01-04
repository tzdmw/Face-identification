#ifndef MY_CAMERA_H
#define MY_CAMERA_H

#include<QTimer>
#include<vector>
// #include<iostream>
// #include <fstream>
#include<QImage>
#include<QPixmap>
#include<opencv2/opencv.hpp>
#include<opencv2/objdetect/face.hpp>
#include <opencv2/core.hpp>



#define FACE_MAT_MAX 10

class my_dlib;

class my_camera
{
public:

    //获得
    static my_camera* instence(int w=0,int h=0)
    {
        if(m_cam == nullptr)
        {
            m_cam = new my_camera(w,h);
        }

        return m_cam;
    }

    //释放
    static void Release()
    {
        if(m_cam != nullptr)
        {
            delete m_cam;
            m_cam = nullptr;
        }
    }


private:
    my_camera(int,int);

    ~my_camera();

public:

    void open_camera();     //打开摄像头

    void close();           //关闭摄像头

    std::vector<cv::Rect>& select_face();     //返回人脸的坐标

    static QImage Mat2QImage(cv::Mat cvImg);

    void set_size(int,int);

    cv::Mat & get_face_mat();

    //显示帧率函数2
    void ShowFPS_Method(cv::Mat &dstImage);

    cv::Mat &get_cap();

    void save_csv();



public slots:
    QPixmap &get_pixmap();

private:
    static my_camera* m_cam  ;

    QImage          imag;
    cv::Mat             cap,cap_gray,cap_tmp; //定义一个Mat变量，用于存储每一帧的图像
    cv::VideoCapture    capture;             //声明视频读入类
    QPixmap         pm_cam;

    std::vector<cv::Rect> faceRect;

    cv::Mat face_mat;      //保存截下来的脸部照片

    cv::CascadeClassifier face_cascade;    //载入面部分类器

    //label的宽高
    int m_width;
    int m_height;

    my_dlib *d;


};




#endif // MY_CAMERA_H
