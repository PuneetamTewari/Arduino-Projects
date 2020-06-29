void setup() {
  pinMode(6,OUTPUT); //Relay pin
  pinMode(10,OUTPUT); //LED pin
  digitalWrite(10,HIGH);
}

void loop() {
  digitalWrite(6,LOW);
  delay(1000);
  digitalWrite(6,HIGH);
  delay(1000);
}
