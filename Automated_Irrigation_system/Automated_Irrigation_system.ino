int moisture;
void setup() {
  pinMode(8,OUTPUT);//relay pin for pump
  pinMode(11,INPUT); //sensor
}
void loop()
  { 
  moisture = digitalRead(11);  //moisture value from sensor  
  if(moisture == LOW) 
  {
  digitalWrite(8,HIGH); //if soil moisture is low operate pump by setting realay low (logic high)
  }
  else
  {
  digitalWrite(8,LOW); //if soil moisture is high stop pump by setting relay high (logic low)
  }
  delay(1000); 
}



