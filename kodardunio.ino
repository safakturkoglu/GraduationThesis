int redPin = 9; 
int greenPin = 11; 
int yellowPin = 10;  
byte trigger = 7; 
byte echo = 6; 
unsigned long t_ime; 
double totalpath;
int distance; 
int led_red = 8; 
int num; 
int temp;


void setup() 
{
   pinMode(redPin, OUTPUT); 
   pinMode(greenPin, OUTPUT);
   pinMode(yellowPin, OUTPUT);  
   pinMode(trigger, OUTPUT); // OUTPUT is done to apply voltage to the trigger leg of the sensor
   pinMode(echo, INPUT); // INPUT is done to read the voltage on the Echo leg of the sensor
   pinMode(led_red,OUTPUT);
   Serial.begin(9600); 
}
 
void loop()
{
    
  digitalWrite(trigger, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigger, LOW); 
  /*
   After the wave is generated and reflected back, the time that the Echo leg will go 
   into HIGH state is recorded with the pulseIn function.
   */
  t_ime = pulseIn(echo, HIGH); 
 
  totalpath = (double)t_ime*0.034; 
  distance = totalpath / 2; // distance is found after operations
  /*
   Depending on the distance, the color of the RGB will be determined.
   */
  if (distance >= 50)
  {   
       setColor(0, 255, 255); 
       temp = 0; 
   }
  
   else if ( distance < 50 && distance >= 15)
   {
        setColor(0, 255, 0);  
        temp = 0;
   }
   
   else if ( distance < 15   )
   {
        setColor(255,255,0);  
        temp = 1;
   }
      
   
   if(Serial.available()) 
   {

        num = Serial.read();
        /* 
         Conditions were created according to data 1 and 3 
         coming from pyhton
         */
    
        if(num == '3' && temp == 0) // Human detected, turn on LED
        {
            digitalWrite(led_red, HIGH); 
        }
        
        else if(num == '1') // no human 
        {
            digitalWrite(led_red, LOW); 
        } 
        
        else if(num == '3' && temp == 1) 
        {
             digitalWrite(led_red, LOW);
        }
     }

}
void setColor(int red, int green, int yellow)
{  

  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(yellowPin, yellow);  
   
}
