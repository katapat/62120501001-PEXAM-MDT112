#include "CytronMotorDriver.h"
CytronMD motor1(PWM_PWM, 3, 4);  
CytronMD motor2(PWM_PWM, 10, 11);
void setup(){
  pinMode(buzzer, OUTPUT); 
  tone(8,600,400); 
  Serial.print("Hello MDT");
  motor1.setSpeed(-255);
  motor2.setSpeed(-255);
  Serial.print("Turn CCW");
  delay(2000);
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  Serial.print("Turn CW");
  delay(2500);

}

void loop(){
  motor1.setSpeed(0);
  motor2.setSpeed(0);
              
}
