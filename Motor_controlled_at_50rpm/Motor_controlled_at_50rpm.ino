void setup() {
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
 analogWrite(3,127);
 analogWrite(5,0);
 delay(1000);
}
