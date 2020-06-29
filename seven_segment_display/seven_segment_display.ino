void setup() {
pinMode(3,OUTPUT); //a  common anode type low- is high, high- is low
pinMode(4,OUTPUT); //b
pinMode(5,OUTPUT); //c
pinMode(6,OUTPUT); //d
pinMode(7,OUTPUT); //e
pinMode(8,OUTPUT); //f
pinMode(9,OUTPUT); //g
pinMode(10,OUTPUT); //h
}

void loop() {
digitalWrite(3,LOW); //zero
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
delay(500);
digitalWrite(3,HIGH); //one
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
delay(500);
digitalWrite(3,LOW); //two
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(500);
digitalWrite(3,LOW); //three
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(500);
digitalWrite(3,HIGH); //four
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(500);
digitalWrite(3,LOW); //five
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(500);
digitalWrite(3,LOW); //six
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(500);
digitalWrite(3,LOW); //seven
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
delay(500);
digitalWrite(3,LOW); //eigth
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(500);
digitalWrite(3,LOW); //nine
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(500);}
