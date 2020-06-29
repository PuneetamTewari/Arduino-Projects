void setup() {
pinMode(6,OUTPUT); //MOTORS
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(2,INPUT); //DTMF
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
}

void loop() {
int D0 = digitalRead(2); //dtmf  pin d0
int D1 = digitalRead(3); //dtmf  pin d1
int D2 = digitalRead(4); //dtmf  pin d2
int D3 = digitalRead(5); //dtmf  pin d3
if (D0==0&&D1==0&&D2==1&&D3==0) // key 2 for forward
 {
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }
if (D0==0&&D1==0&&D2==1&&D3==1) //key 3 for right turn
{
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
}
if (D0==0&&D1==1&&D2==0&&D3==0) //key 4 for left turn
{
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
}
if (D0==0&&D1==1&&D2==0&&D3==1) //key 5 for stop
{
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
}
if (D0==0&&D1==1&&D2==1&&D3==0) //key 6 for reverse
{
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);
   digitalWrite(8,LOW);
   digitalWrite(9,HIGH);
}
}
