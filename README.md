# Graduation Thesis
## Overview of the Project

It was done Real-Time Pedestrian Detection and Tracking in this project. It was used OpenCV library and as interface Python . Data was been sent from the central computer to the microprocessor by serial communication. This project aims to improve safety at train stations. The high voltage in the rail system and the rapid arrival of the train are lethal because of people's carelessness and wrong actions.  When there are people who violate the warning line in the station, the red LEDs buried beneath the line of warning will give a warning by means of a fixed camera. The priority of this project was hearing and visually impaired people. The distance sensor was helped them indirectly via RGB.

## Haar Cascade 
Haar cascade classifier Object Detection using Haar feature-based cascade classifiers is an effective object detection method proposed by Paul Viola and Michael Jones in their paper, "Rapid Object Detection using a Boosted Cascade of Simple Features" in 2001. It is a machine learning based approach where a cascade function is trained from a lot of positive and negative images. It is then used to detect objects in other images.

In order to detect the object, it is first necessary to introduce the object to the system and then search on the image using this defined model. The Haar cascade classifier takes a model file of XML type. These XML files are a data set prepared with thousands of negatives and positives of an object. The images defined as positive are the images where the desired object is found, and the negative ones are the images where the desired object is not found. Many models are already trained in OpenCV.

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
## Working Principle
When the camera sees someone, LED is red, it means alert. In short, when someone or someone is on the yellow line violation line (at camera angle), the red LEDs on the yellow line violation line light up. RGB's red illumination means the train is too far from the station. If it is yellow, it gives the message of approaching. Green is when the train is at the station and this means that you can take the train. The important point is that when the RGB lights up green so when the train is at the station, the yellow line violation line does not matter. Therefore the LED does not give a warning and does not light up.

https://user-images.githubusercontent.com/95358360/145292061-82467dd8-01ec-4abf-91e2-eec596f270a4.mp4

## Outputs

### Face Detection
![Ekran Al??nt??s??](https://user-images.githubusercontent.com/95358360/144767514-668be19b-7c76-4387-92f5-99cc4e7db60c.PNG)

### Python Output 
 ![Ekran Al??nt??s??12](https://user-images.githubusercontent.com/95358360/144767641-464f509a-7b19-4e85-bd48-253888eb75e5.png)
 


