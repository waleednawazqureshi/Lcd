// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(2, 3,4 , 5, 6, 7);
char name1;

void setup()
{
lcd.begin(20, 4);
Serial.begin(9600);

}

void loop() {

if(Serial.available()>0 )
{
  name1 =Serial.read();
  
}
lcd.setCursor(0,0);
  lcd.print(name1);
  delay(1000);
  lcd.clear();
}
b
