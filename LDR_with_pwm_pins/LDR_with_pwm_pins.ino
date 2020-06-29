void setup() {
 pinMode(A2,INPUT);
 pinMode(3,OUTPUT);
 Serial.begin(9600);
}

void loop() {
int value;
value = analogRead(A2);
Serial.println(value);
analogWrite(3,(value/4));
}
