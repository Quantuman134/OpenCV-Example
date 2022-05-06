#include<iostream>
#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	Mat img = imread("demo.jpg");
	if (img.empty())
	{
		return 1;
	}
	namedWindow("Example", WINDOW_AUTOSIZE);
	imshow("Example", img);
	waitKey(0);
	destroyWindow("Example");
	return 0;
}