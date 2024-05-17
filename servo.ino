//Pinball Machine Servo Motor Code
#include <Servo.h>

Servo myservo; 

int pos = 0;    

void setup() {
  // put your setup code here, to run once:
  myservo.attach(6);   
}

void loop() {
  // put your main code here, to run repeatedly:
  for (pos = 0; pos <= 75; pos += 1) {   // goes from 0 degrees to 75 degrees
    // in steps of 1 degree
    myservo.write(pos); 
    delay(15);
  }
  for (pos = 75; pos >= 0; pos -= 1) {  // goes from 75 degrees to 0 degrees
    myservo.write(pos);                  // tell servo to go to position in variable 'pos'
    delay(15);                       
  }
}
