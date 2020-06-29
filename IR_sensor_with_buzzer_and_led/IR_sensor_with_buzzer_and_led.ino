void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,INPUT);
}

void loop() {
  if(digitalRead(5)==HIGH)
   {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
   }
  else
   {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
   }
  }

