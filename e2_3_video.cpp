#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using std::string;

int main(int argc, char** argv)
{
    cv::namedWindow("Exam", cv::WINDOW_AUTOSIZE);
    cv::VideoCapture cap;
    cap.open(string(argv[1]));

    cv::Mat frame;
    while(true)
    {
        cap >> frame;
        if(frame.empty())
            break;
        cv::imshow("Exam", frame);
        if(cv::waitKey(0) >= 0)
            break;
    }
    return 0;
}