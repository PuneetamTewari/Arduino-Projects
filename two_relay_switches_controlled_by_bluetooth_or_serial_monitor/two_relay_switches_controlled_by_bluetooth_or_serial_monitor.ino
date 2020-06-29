char t;
void setup() {
Serial.begin(9600);
pinMode(11,OUTPUT); //relay pin 1
pinMode(12,OUTPUT); //relay pin 2
}
void loop() {
if(Serial.available())
 {
  t=Serial.read();
  Serial.println(t);
 }
if(t=='1') //relay 1 energizes
 {
  digitalWrite(11,LOW);
 }
if(t=='2') //relay 1 off
 {
  digitalWrite(11,HIGH);
 }
if(t=='3') //relay 2 energizes
 {
  digitalWrite(12,LOW);
 }
if(t=='4') //relay 2 off
 {
  digitalWrite(12,HIGH);
 }
if(t=='5') //relay 1 and 2 both are energized
 {
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
 }
if(t=='6') //relay 1 and 2 both are off
 {
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
 }
}
