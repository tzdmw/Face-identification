#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_processing/render_face_detections.h>
#include <dlib/image_processing.h>
#include <iostream>
#include <QApplication>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "dlib/opencv/cv_image.h"
#include <vector>
using namespace dlib;
using namespace std;
using namespace cv;
// ----------------------------------------------------------------------------------------

int main(int argc, char** argv)
{
    frontal_face_detector detector = get_frontal_face_detector();
    shape_predictor sp;
    deserialize("D:/software/QT/8/cam/shape_predictor_68_face_landmarks.dat") >> sp;
    VideoCapture cap(0);
    if (!cap.isOpened())
    {
        cerr << "Unable to connect to camera" << endl;
        return 1;
    }
    namedWindow("Face Detection", WINDOW_NORMAL);
    while(true)
    {
        Mat frame;
        cap >> frame;
        cv_image<rgb_pixel> dlib_img(frame);
        std::vector<dlib::rectangle> faces = detector(dlib_img);
        std::vector<full_object_detection> shapes;
        for(unsigned long i = 0; i < faces.size(); ++i)
        {
            shapes.push_back(sp(dlib_img, faces[i]));
        }
        cv::Mat img = frame.clone();
        for (unsigned long i = 0; i < faces.size(); ++i)
        {
            cv::rectangle(img, cv::Point(faces[i].left(), faces[i].top()), cv::Point(faces[i].right(), faces[i].bottom()), cv::Scalar(0, 255, 0), 2);
            for (unsigned long j = 0; j < 68; ++j)
            {
                cv::circle(img, cv::Point(shapes[i].part(j).x(), shapes[i].part(j).y()), 3, cv::Scalar(0, 0, 255), -1);
            }
        }
        cv::imshow("Face Detection", img);
        if (cv::waitKey(1) == 27) // ESC键退出
        {
            break;
        }
    }
    cap.release();
    cv::destroyAllWindows();

    return 0;
}

