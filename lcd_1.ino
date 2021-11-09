#include <LiquidCrystal.h>

#include  <liquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
void setup() {
lcd.begin(16,2);
  // put your setup code here, to run once:

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("welcome");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("to");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("NED UET");
  delay(1000);
  lcd.clear();
  // put your main code here, to run repeatedly:

}
