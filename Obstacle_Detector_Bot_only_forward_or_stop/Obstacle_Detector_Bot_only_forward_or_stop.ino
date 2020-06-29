void setup() {
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  digitalWrite(8,LOW);
  delayMicroseconds(2);
  digitalWrite(8,HIGH);
  delayMicroseconds(10);
  float duration = pulseIn(7,HIGH);
  float distance = ((duration*(0.0343))/2);
  if(distance>15)
   {
   digitalWrite(1,HIGH);
   digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW); 
   }
  else if(distance<=15)
  {
   digitalWrite(1,LOW);
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW); 
  }
}
