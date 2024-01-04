#include "input_face.h"
#include "ui_input_face.h"

#include <iostream>
#include <string>
#include <QDebug>
#include <fstream>
#include <QDir>
#include<QTimer>


input_face::input_face(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::input_face)
{
    ui->setupUi(this);

    ca = my_camera::instence();

    ca->set_size(ui->cam_input->width(),ui->cam_input->height());

    ui->label_showNums->setText(QString("%0/1").arg(take_pic_nums));

//    d = new my_dlib();

//    //启动计时器 每隔20ms 给my_dlib传过去一帧画面，让my_dlib检测
//    timer = new QTimer();
//    timer->start(20);              // 开始计时，20ms获取一帧
//    connect(timer,&QTimer::timeout,[=]{

//        QString name;
//        if(d->recognition_face(ca->get_cap(),name))
//        {
//            if(name.size() != 0)
//            {
//                qDebug()<<"检测到人脸："<<name;
//                ca->set_name(name);
//            }

//        }

//        qDebug()<<"正在检测人脸";

//    });

}

input_face::~input_face()
{
    delete ui;

    face_list.clear();
}


//拍照按钮按下后
void input_face::on_pushButton_take_clicked()
{
    /*  拍照按钮按下后：
     *  1，后台存储一张当前画面的脸部照片（拍照按钮要点击10次）
     *  2，将一张图片设置到label上
     *  3，在label显示的图片上面标注出一些信息,包括
     *      人脸超出范围
     *      人脸数量
     */

//    if(take_pic_nums == 5)
//    {   //如果五次照片拍满了

//        Person_nums++;

//    }

    //拍照按钮要
    if(take_pic_nums < 1)
    {
        take_pic_nums++;
        ui->label_showNums->setText(QString("%0/1").arg(take_pic_nums));

        cv::Mat face = ca->get_face_mat();
        face_list.push_back(face);
        ui->cam_input->setPixmap(ca->get_pixmap());
    }
    else
    {
        qDebug()<<"now pic is full!....";
        return;
    }





}

//保存当前摄像头的人脸到jpg
void input_face::save_face_to_jpg()
{
    if(face_name.size()==0 || take_pic_nums!= 1)
    {
        return ;
    }

    int nums = 0;

    path+=QString("/%0").arg(face_name);
    for(auto face:face_list)
    {
        QString img_path = path + QString("/%0.jpg").arg(nums);
        cv::imwrite(img_path.toStdString(),face);
        qDebug()<<"save success:"<<face_name<<"'s pic,size:"<<nums<<"path:"<<img_path;
        nums++;
    }

    //清空 face_list 里面的图片
    //face_list.clear();    //提前情况的话，my_dlib里面收不到数据
    take_pic_nums =0;

}




//输入姓名后确认按钮
void input_face::on_pushButton_sureName_clicked()
{


    if(ui->lineEdit_name->text().size() == 0)
    {//如果姓名栏为空则不处理
        return;
    }
    else
    {
        face_name=ui->lineEdit_name->text();

        QDir dir(path);
        qDebug()<<QDir::currentPath();
        if(!dir.exists(face_name))
        {
            dir.mkdir(face_name);
            qDebug()<<QString("文件夹%1创建成功！").arg(face_name);\

            save_face_to_jpg();

        }
        else
        {
            qDebug()<<QString("文件夹%1创建失败，以存在！").arg(face_name);
            return;
        }



    }
}



//保存为csv数据点击事件
void input_face::on_pushButton_save_clicked()
{

    ca->save_csv();

}

