/**
 * @file    main.cpp
 * @authors  Mayank Pathak and Bhargav Dandamudi
 * @version 1.0
 * @copyright GNU Public License
 *
 * @brief Mid-Term Project (with partner component)
 *
 * @section DESCRIPTION
 *
 *  This is the main file for the LaneDetection implementation.
 *
 */

#include "../include/LaneDetector.hpp"

int main() {
    LaneDetector LaneDetector;
    int totalFrames;
    cv::VideoCapture frameCount("../Dataset/Dataset2.mp4");
    totalFrames = frameCount.get(CV_CAP_PROP_FRAME_COUNT);
    std::cout << "Total Frames" << totalFrames;
    for (int i = 3150; i < 4510; ++i) {
	cv::Mat testImage = LaneDetector.readFrame(i);
	cv::Mat hsvY = LaneDetector.hsvThresholdY(testImage);
	cv::Mat hsvW = LaneDetector.hsvThresholdW(testImage);

	cv::Mat roiY = LaneDetector.roiMaskSelection(hsvY);
	cv::Mat roiW = LaneDetector.roiMaskSelection(hsvW);

	cv::Mat roi = roiW + roiY;
	cv::putText(roi, std::to_string(i), cv::Point(5, 205),   // Coordinates
		    cv::FONT_HERSHEY_COMPLEX_SMALL,		 // Font
		    2.0,			 // Scale. 2.0 = 2x bigger
		    cv::Scalar(255, 255, 255),   // BGR Color
		    1);				 // Anti-alias (Optional)

	cv::Mat morphImage = LaneDetector.morph(roi);
	cv::Mat edgedImage = LaneDetector.edgeDetector(morphImage);

	cv::imshow("DIsplay Photos", testImage);
	cv::imshow("morph", morphImage);
	cv::imshow("roi", edgedImage);

	cv::waitKey(-1);
    }

    cv::destroyAllWindows();
    return 0;
}
