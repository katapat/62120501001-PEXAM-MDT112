#include "CytronMotorDriver.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 oled = Adafruit_SSD1306(128, 32, &Wire);
CytronMD motor1(PWM_PWM, 3, 4);  
CytronMD motor2(PWM_PWM, 10, 11);
int buttonState = 0;
int x;
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
  pinMode(2, INPUT_PULLUP);  
  oled.begin(0x3C);
  oled.clearDisplay(); 
  oled.setCursor(20, 10);
  oled.setTextColor(SSD1306_WHITE);
  oled.setTextSize(3);
  pinMode(2, INPUT);

}

void loop(){
  motor1.setSpeed(0);
  motor2.setSpeed(0);
  oled.print("Hello MDT");
  oled.display();
  delay(1000);
  oled.clearDisplay();
  delay(350); 
  tone(8,600,200); 
  buttonState = digitalRead(2);
  if (buttonState == 1) { 
  for(int i = 0; i <= 5 ;i++){
  x = i * 51;
  motor1.setSpeed(x);
  motor2.setSpeed(x);
     }
  }
              
}
