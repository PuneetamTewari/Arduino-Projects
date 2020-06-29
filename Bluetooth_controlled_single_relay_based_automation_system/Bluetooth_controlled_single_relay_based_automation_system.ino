char t;
void setup() {
Serial.begin(9600);
pinMode(11,OUTPUT); //relay pin
pinMode(8,OUTPUT); //LED pin
pinMode(8,HIGH);
}
void loop() {
if(Serial.available())
 {
  t=Serial.read();
  Serial.println(t);
 }
if(t=='1') //relay energizes
 {
  digitalWrite(11,LOW);
 }
if(t=='2') //relay off
 {
  digitalWrite(11,HIGH);
 }
}
