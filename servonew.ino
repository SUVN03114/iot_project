#include<Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(8,OUTPUT);
myservo.attach(4);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(13,HIGH);
   digitalWrite(12,LOW);
    digitalWrite(8,LOW);
    myservo.write(0);
    delay(10000);
   
    digitalWrite(13,LOW);
   digitalWrite(12,HIGH);
    digitalWrite(8,LOW);
    myservo.write(90);
    delay(10000);

}
