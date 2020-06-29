#include <Servo.h>

Servo myservo;
int pos = 0; 

void setup() {
  myservo.attach(5);
}

void loop() {
  for (pos = 0; pos <= 180; pos+=45)
    myservo.write(pos);        
    delay(1000);    
  }

