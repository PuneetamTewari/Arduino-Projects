
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  int i,j;
  lcd.setCursor(5,1);
  lcd.print("hello");
  for(i=15;i>=0;i--)
  {
    lcd.scrollDisplayRight();
    delay(150);
  }
    lcd.setCursor(5,0);
    lcd.print("World");
  for(j=0;j<16;j++)
   {
     lcd.scrollDisplayLeft();
     delay(150);
   }
  }

