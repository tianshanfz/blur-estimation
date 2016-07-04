#ifndef BLURESTIMATION_H
#define BLURESTIMATION_H
#include <opencv/cv.h>
#include <opencv/highgui.h>

/* implementation of "The Blur Effect: Perception and Estimation with a New	No-Reference Perceptual Blur Metric"*/
class BlurEstimation
{
    public:
        BlurEstimation(const cv::Mat & input);
        virtual ~BlurEstimation(){}
        float estimate();//return measure of  bluriness of input, 0<=ret<=1 , higher ret means more bluriness
    protected:
        void blur();
        void calDifferenceVer(const cv::Mat &origin,cv::Mat &d_ver);
        void calDifferenceHor(const cv::Mat &origin,cv::Mat &d_hor);
        void calV(const cv::Mat &m1,const cv::Mat &m2, cv::Mat &_Vver);
        float sumofCoefficient(const cv::Mat &d_input);
        float estimationFinal(float s_Vver,float s_Vhor,float s_Fver,float s_Fhor);
    private:
        cv::Mat _F;
        cv::Mat _Bver;
        cv::Mat _Bhor;

};

#endif // BLURESTIMATION_H
