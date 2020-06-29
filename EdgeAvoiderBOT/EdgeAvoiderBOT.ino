void setup() {
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(10,INPUT);
pinMode(11,INPUT);
}
void loop() {
if(digitalRead(10)==HIGH&&digitalRead(11)==HIGH) //drive
 {
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
 }
else if(digitalRead(10)==LOW&&digitalRead(11)==HIGH) //right
 {
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
 }
else if(digitalRead(11)==LOW&&digitalRead(10)==HIGH) //left
 {
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
 }
if(digitalRead(10)==LOW&&digitalRead(11)==LOW) //stop
 {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 }
}
