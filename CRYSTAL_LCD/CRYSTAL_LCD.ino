#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin();
  lcd.backlight();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Hi Amma");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Love You Amma!");
  delay(2000);
  lcd.clear();
  lcd.print("Im Monika!!");
  delay(2000);
  lcd.clear();

}
