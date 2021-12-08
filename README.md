# Graduation Thesis
## Overview of the Project
This project aims to improve safety at train stations. The high voltage in the rail
system and the rapid arrival of the train are lethal because of people's carelessness and
wrong actions. The priority of this project was hearing and visually impaired people.
The distance sensor was helped them indirectly. When there are people who violate
the warning line in the station, the red LEDs buried beneath the line of warning will
give a warning by means of a fixed camera. The train is about to get in the station and
it was been easier to realize that it is approaching that thanks to the red, yellow and
green LEDs. The speaker at the bottom of this traffic light was been able to analyze
the approach of the train more comfortably for the visually impaired people.
## About the Project 
This project was done with human tracking and video image processing using
OpenCV library and Python as interface. Data was been sent from the central computer
to the microprocessor by serial communication when people using the rail system
over the video received from the camera violate the warning line. The information
was also been used by the ultrasonic sensor to be sent to the microprocessor related to
the distance of the train. When the specifed conditions was formed according to the
program to be written, necessary warning was been given to the passengers with both
sound warning and light warning.

## What is Haar Cascade? 
Haar cascade classifier Object Detection using Haar feature-based cascade classifiers is an effective object detection method proposed by Paul Viola and Michael Jones in their paper, "Rapid Object Detection using a Boosted Cascade of Simple Features" in 2001. It is a machine learning based approach where a cascade function is trained from a lot of positive and negative images. It is then used to detect objects in other images.

In order to detect the object, it is first necessary to introduce the object to the system and then search on the image using this defined model. The Haar cascade classifier takes a model file of XML type. These XML files are a data set prepared with thousands of negatives and positives of an object. The images defined as positive are the images where the desired object is found, and the negative ones are the images where the desired object is not found. Many models are already trained in OpenCV

## Algorithm for Image Processing
* First, the haar cascade method is used to detect faces or full body in each frame of the webcam feed.

* The object is detected with a function that found in the library.

* The region of image containing the face is resized and its circumference is drawn with a green line as a rectangular shape.

* Operations are carried out within the necessary conditions, after the object is determined and it is displayed on the screen.

### Required pyhton packages
* pip install pyserial
* pip install imutils
* pip install opencv-contrib-python
* pip install pyserial
* pip install videoinput
* pip install os
* pip install packages

## Outputs

### Face Detection
![Ekran Alıntısı](https://user-images.githubusercontent.com/95358360/144767514-668be19b-7c76-4387-92f5-99cc4e7db60c.PNG)

### Python Output 
 ![Ekran Alıntısı12](https://user-images.githubusercontent.com/95358360/144767641-464f509a-7b19-4e85-bd48-253888eb75e5.png)
 


