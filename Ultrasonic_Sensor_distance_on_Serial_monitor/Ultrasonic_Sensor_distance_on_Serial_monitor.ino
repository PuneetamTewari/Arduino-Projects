void setup() {
  Serial.begin(9600);
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
  }

void loop() {
  digitalWrite(4,LOW);
  delayMicroseconds(2);
  digitalWrite(4,HIGH);
  delayMicroseconds(10);
  float duration = pulseIn(3,HIGH);
   float distance = ((duration*(0.0343))/2);
  Serial.println(distance);
  delay(1000);
}
