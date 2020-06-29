#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
lcd.begin(16,2);  
pinMode(7,INPUT); //MQ-6 lpg gas sensor
pinMode(8,OUTPUT); //buzzer
}

void loop() {
byte leak;
leak=digitalRead(7);
if(leak==LOW)
 { 
  lcd.setCursor(3,0);
  lcd.print("***ALERT***");
  lcd.setCursor(3,1);
  lcd.print("GAS LEAKAGE");
  digitalWrite(8,HIGH);
  delay(500);
 }
else if(leak==HIGH)
 {
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("***STANDBY***");
  lcd.setCursor(3,1);
  lcd.print("NO LEAKAGE");
  digitalWrite(8,LOW);
 }
}

