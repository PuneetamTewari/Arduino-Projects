void setup() {
pinMode(7,OUTPUT);
pinMode(8,INPUT);
}
void loop() {
  if (digitalRead(8)==HIGH)
   {
    digitalWrite(7,LOW);
   }
  else if(digitalRead(8)==LOW)
  {
    digitalWrite(7,HIGH);
  }
}

