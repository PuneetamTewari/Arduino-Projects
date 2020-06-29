void setup() {
 pinMode(A2,INPUT);
 pinMode(4,OUTPUT);
 Serial.begin(9600);
}

void loop() {
int intensity;
intensity = analogRead(A2);
Serial.println(intensity);
if (intensity<=650)
 {
  digitalWrite(4,HIGH);
 }
else
 {
  digitalWrite(4,LOW); 
 }
}
