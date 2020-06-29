void setup() { //RGB LED
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
digitalWrite(4,HIGH); //R on
digitalWrite(5,LOW);
digitalWrite(6,LOW);
delay(500);
digitalWrite(4,LOW); //G on
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
delay(500);
digitalWrite(4,LOW); //B on
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
delay(500);
digitalWrite(4,HIGH); //R+G on
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
delay(500);
digitalWrite(4,LOW); //G+B on
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
delay(500);
digitalWrite(4,HIGH); //R+B on
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
delay(500);
digitalWrite(4,HIGH); //White (R+G+B)
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
delay(500);
}
