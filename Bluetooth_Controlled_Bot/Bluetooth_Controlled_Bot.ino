int t;
void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT); 
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  if(Serial.available())
  {
    t=Serial.read();
    Serial.println(t);
  }
  if(t=='1') //forward
  {
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW); 
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  }
  if(t=='2') //right turn
  {
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  }
  if(t=='3') //left turn
  {
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  }
  if(t=='4') //stop
  {
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
  }
} 
