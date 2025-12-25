#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#include <Adafruit_Sensor.h>
#define DHTPIN 4
#define DHTYPE DHT11
DHT dht(DHTPIN,DHTYPE); // note that, dht(dhtpin, dhtype) is the object
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  // put your setup code here, to run once:
  dht.begin();

  lcd.begin();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Turning on DHT11");
  delay(2000);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  float t = dht.readTemperature();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  delay(2000);
  lcd.clear();
}
