//#include "mainwindow.h"
//#include "ui_mainwindow.h"
//
//#include<QPainterPath>
//#include<QBitmap>
//#include<QPainter>
//#include<QDebug>
//
//#include"my_camera.h"
//#include"input_face.h"
//
//MainWindow::MainWindow(QWidget *parent)
//    : QMainWindow(parent)
//    , ui(new Ui::MainWindow)
//{
//    ui->setupUi(this);
//
//    init();
//
//    //connect(timer, SIGNAL(timeout()), this, SLOT(readFarme()));  // 时间到，读取当前摄像头信息
//
//    //测试从my_camera里面传出图像
//    //启动计时器
//    connect(timer,&QTimer::timeout,[=]{
//
//        ui->cam->setPixmap(ca->get_pixmap());
//
//    });
//
//
//}
//
//MainWindow::~MainWindow()
//{
//    delete ui;
//    delete timer;
//
//    my_camera::Release();
//    //delete ca;
//}
//
//void MainWindow::init()
//{
//    //启动计时器
//    timer   = new QTimer(this);
//    timer->start(20);              // 开始计时，20ms获取一帧
//
//
//    //ui控件的一些设置
//    ui->cam->setScaledContents ( true ); //根据label大小缩放图片
//
//    ui->take->setIcon(QIcon(":/camera.ico"));
//
//    //初始化相机模块
//    //ca = new my_camera(ui->cam->width(),ui->cam->height());
//
//    ca = my_camera::instence(ui->cam->width(),ui->cam->height());
//
//}
//
//
//
//void MainWindow::on_take_clicked()
//{
//
//    /*
//     * 点击相机按钮功能如下：
//     * 1，出现录入新人脸的界面
//     * 2，记录该新人脸的信息并保存为csv
//     * 3，刷新主界面，读取新的csv文件
//     * 4，主界面识别该面部，并标注在上面
//     */
//    qDebug()<<"putton_clicked...";
//
//    if(is_clicked == false)
//    {
//        ui->take->setIcon(QIcon("://camera_clicked.png"));
//        is_clicked = true;
//    }
//    else
//    {
//        ui->take->setIcon(QIcon(":/camera.ico"));
//        is_clicked = false;
//    }
//
//    input_face *f = new input_face;
//    f->show();
//
//
//
//
//
//}
//
