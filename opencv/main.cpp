//
//  main.cpp
//  opencv
//
//  Created by 徐欣 on 15/11/22.
//  Copyright © 2015年 xx. All rights reserved.
//

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    VideoCapture cap(0);
    if(!cap.isOpened()){
        return -1;
    }
    Mat frame;
    
    while(true){
        cap>>frame;
        imshow("当前视频", frame);
        if(waitKey(30) >= 0) break;
    }
    return 0;
}