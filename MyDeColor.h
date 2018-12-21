#ifndef MYDECOLOR_H
#define MYDECOLOR_H

#include <opencv2/opencv.hpp>
#include <vector>
#include <algorithm>

class MyDeColor
{
public:
MyDeColor();
~MyDeColor();
cv::Mat rtcprgb2gray(const cv::Mat &im);


private:

 void add(const cv::Vec3b &c0, 
                const cv::Vec3b &c1, 
                std::vector<cv::Vec3f> &P, 
                std::vector<float> &det);

 std::vector<cv::Vec3f> wei();

};

#endif// MYDECOLOR
