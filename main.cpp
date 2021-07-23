#include <iostream>
#include <vector>

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

int  main()
{
    Mat image(800, 600, CV_8UC3, Scalar(255, 150, 150));
    for(int i = 0; i < 200; i ++){
        circle(image, Point(200+i, 200), 40, Scalar(255, 255, 255), -1); // se colocar um numero positivo ao inves de -1, desenha a borda
        circle(image, Point(400+i, 200), 40, Scalar(255, 255, 255), -1);
        circle(image, Point(200+i, 200), 10, Scalar(0, 0, 0), -1);
        circle(image, Point(400+i, 200), 10, Scalar(0, 0, 0), -1);
        imshow("Imagem",image);
        waitKey(100);
        rectangle(image, Point(200+i, 600), Point(600, 500), Scalar(100, 100, 200), -1);
        rectangle(image, Point(250, 500+i), Point(550, 500), Scalar(255, 255, 255), -1);
        imshow("Imagem",image);
    }
    waitKey(0);
    imshow("Imagem",image);

}
