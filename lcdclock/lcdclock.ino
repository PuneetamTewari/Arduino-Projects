#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
lcd.begin(16, 2);
lcd.setCursor(3,0);
lcd.print("Hrs:Min:Sec");
}
void loop() {
int i,j,k;
lcd.setCursor(3,1);
for(i=0;i<12;i++)
 {
  lcd.print(i);
  for(j=0;j<60;j++)
   {
    lcd.setCursor(5,1);
    lcd.print(":");
    lcd.print(j);
    for(k=0;k<60;k++)
     {
      lcd.setCursor(7,1);
      lcd.print(":");
      lcd.print(k);
      delay(1000);
     }
   }
 }
}
