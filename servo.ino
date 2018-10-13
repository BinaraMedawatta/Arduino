#include <Servo.h>

Servo myservo; 
int val;
void setup() {
  Serial.begin(115200);
  myservo.attach(9);
}

void loop() {
  val = Serial.read();
  if(val!=0){
    myservo.write(pos);
  }
}

