# Traffic Lane Detection
[![Build Status](https://travis-ci.com/mayankpathak10/MidTerm_LaneDetection.svg?branch=master)](https://travis-ci.com/mayankpathak10/MidTerm_LaneDetection)
[![Coverage Status](https://coveralls.io/repos/github/mayankpathak10/MidTerm_LaneDetection/badge.svg?branch=master)](https://coveralls.io/github/mayankpathak10/MidTerm_LaneDetection?branch=master)
---


## OverView

The aim of this project is to develop a Traffic Lane Detection algorithm.

At this point of time, a lane detection algorithm is proposed. The project will use a video feed from Lane dataset as input to detect Lanes. It will also be able to predict any turns detected in the video frame. 

The project will be divided into 3 sprints, each for a time period of one week. Product backlog will be maintained for every sprint. Overall product requirements will be distributed
among sprints.

## Approach

- Frames will be grabbed from the given dataset video and processed with smoothing filter. 
- Followed with selection of ROI and HSV/RGB/Lab thresholding.
-  After applying an appropriate threshold, an edge detector would be used. To find lanes on the current frame Hough transform will be used.
- Turns will be predicted by analyzing vanishing point and the slope of detected lanes. Respective lanes and predicted turn indicators will be plotted on the current frame.
- Finally, test cases will be verified.

The UML Activity diagram for this approach is shown below:

![inputImage]()

## Dependencies

The only dependency for this project is OpenCV 3.4.0. To install it, follow the next steps:

```
sudo apt-get install build-essential
sudo apt-get install cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev
sudo apt-get install python-dev python-numpy libtbb2 libtbb-dev libjpeg-dev libpng-dev libtiff-dev libjasper-dev libdc1394-22-dev
cd ~/<my_working_directory>
git clone https://github.com/opencv/opencv.git
git clone https://github.com/opencv/opencv_contrib.git
cd ~/opencv
mkdir build
cd build
cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=/usr/local ..
make -j$(nproc)
sudo make install
sudo /bin/bash -c 'echo "/usr/local/lib" > /etc/ld.so.conf.d/opencv.conf'
sudo ldconfig
```

## How to Build

(Will be upadted in iteration 2)

## Doxygen Documentation

(Will be updated in iteration 2)


## Solo Iterative Process

SIP has been used to implement this project. A product backlog and Time log can be found the link below:

https://docs.google.com/spreadsheets/d/1Xt0NCs74jCt25Va_o6To-D20YlPQTwmwj0yQRetGTwg/edit?usp=sharing

The project consists of Two iterations:
Iteration 1: Design UML diagrams, Add product backlog, Collected Dataset, devise Lane detection Algorithm.

Driver: Mayank Pathak
Navigator: Bhargav Dandamudi

Iteration 2: Doxygen Documentation, Working Source Code, Finallized ReadMe file with clear instructions. Complete Backlogs.

Driver: Bhargav Dandamudi
Navigator: Mayank Pathak

## Software Technologies

Programming Language: Cpp
Compiler: Linux GCC
External Libraries: OpenCV
Version Control System: Git

## Deliverables

Source Code
Output Video

## Dataset:

Dataset for this project have been secured from Caltech Lanes and Oxford Lanes Dataset. Selected opensource datasets are included in the link below:
https://drive.google.com/open?id=1d4wX8wT0fDOeTtHd-jsBZRLYHG95-pC3

## Product Backlog 

The product 

```
git clone --recursive https://github.com/dpiet/cpp-boilerplate
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```
