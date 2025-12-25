/*
So, this code basically has 3 components.. 2 LEDs and 1 LCD.
The two LEDs blink 1 second once and the LCD displays the message "Hello There!" every 2 seconds once
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int ledPin1 = 2;
int ledPin2 = 3;
unsigned long prevTime1 = 0;
const unsigned long interval1 = 1000;
unsigned long prevTime2 = 0;
const unsigned long interval2 = 2000;
bool lcdState = false;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin();
  lcd.backlight();
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}


void loop(){
  unsigned long currenTime = millis();
  if (currenTime - prevTime1 >= interval1){
    prevTime1 = currenTime;
    digitalWrite(ledPin1, !digitalRead(ledPin1));
    digitalWrite(ledPin2, !digitalRead(ledPin2));
  }
  if (currenTime - prevTime2 >= interval2){
    prevTime2 = currenTime;
    lcdState = !lcdState;

    if (lcdState){
      lcd.clear();
      lcd.setCursor(2, 0);
      lcd.print("Hello There!");
      
    }else{
      lcd.clear();
    }

  }
}