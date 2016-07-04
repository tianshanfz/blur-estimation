# blur-estimation

This is a C++ implementation of paper "The Blur Effect: Perception and Estimation with a New	No-Reference Perceptual Blur Metric".

Estimate the blurriness of a color image

Dependency: openCV

Use it like this:

  void demo()
  {
    //...
    cv::Mat origin=cv::imread("input.png");
    BlurEstimation estimater(origin);
    cout<<estimater.estimate();
    //...
  }
