#include <Servo.h>

Servo motorServo;

void setup() {
  
  motorServo.attach(10);
  
}

void loop() {
 
  motorServo.write(90);
  delay(1000);
  
}
