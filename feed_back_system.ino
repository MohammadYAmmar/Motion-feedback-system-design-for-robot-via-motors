#include <Servo.h>
//Import to using the Arduino Servo Library

// Create servo objects to control a servo
Servo servo_motor1;
Servo servo_motor2;

int resistorValue ; 
int const resistorChange_pin = A0;


void setup() {
  
  //Attach the Servo variable to a pin with (pin, min, max)
  servo_motor1.attach(2);
  servo_motor2.attach(3);
  pinMode(resistorChange_pin, INPUT);
}

void loop() { 
 
  //map(value, fromLow, fromHigh, toLow, toHigh)          
  resistorValue = map(analogRead(resistorChange_pin), 0, 1023, 0, 180);     
  servo_motor1.write(resistorValue);      
  servo_motor2.write(resistorValue);   
   
  // Delay n milliseconds                
  delay(30); 

}