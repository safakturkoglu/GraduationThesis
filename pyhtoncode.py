
import cv2 
import time 
import os 
import videoinput 
import sys
import serial 
insan = 0

#Whatever port the arduino is connected to on the computer should be changed and that port should be made.
serialport = serial.Serial('COM6', 9600)

person_cascade = cv2.CascadeClassifier(
    os.path.join(r"C:\opencv\sources\data\haarcascades\haarcascade_frontalface_default.xml"))
cap = cv2.VideoCapture(0)	

	
while True:
	r, frame = cap.read() 

	if r:
		start_time = time.time()
		frame = cv2.resize(frame,(640,360)) # Downscale to improve frame rate
		gray_frame = cv2.cvtColor(frame, cv2.COLOR_RGB2GRAY) # Haar-cascade classifier needs a grayscale image
		rects = person_cascade.detectMultiScale(gray_frame) #If there is a human in the gray image, it assigns a rects
		end_time = time.time()
		print("Elapsed Time:",end_time,start_time)
		insan = 0
		
		for (x, y, w, h) in rects: #In the loop the coordinates are determined and the object is enclosed in a green rectangle
                
			print("x koordinatı",x)
			print("y koordinatı",y)
			print("w koordinatı",w)
			print("h koordinatı",h)
			cv2.rectangle(frame, (x,y), (x+w,y+h),(0,255,0),2)
			insan=insan+1
		
		print("insan Sayisi=",insan)

                # One of the two data is sent to Arduino and the condition is fulfilled.
		if insan > 0:
			serialport.write(b"3")#sending data for red led
			print("A")
		else:
			serialport.write(b"1")#sending data for green led
			print("B")
				
		cv2.imshow("preview", frame)	
	k = cv2.waitKey(1)
	if k & 0xFF == ord("q"): # Exit condition
		break
cv2.destroyAllWindows()
serialport.flush()

