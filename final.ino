#include <SoftwareSerial.h>
#include<Servo.h>
Servo myservo;

int sensorPin = A2; // select the input pin for the LDR

int sensorValue = 0; // variable to store the value coming from the sensor

int led = 2;
int Pin = A3;
int smk = A4;
int value;
int smoke;  

int x=0;
int count=0;
int limit=600;
int C=1;
void setup()
{
Serial.begin(9600);
pinMode(13,OUTPUT);//green
pinMode(12,OUTPUT);//yellow
pinMode(11,OUTPUT);//red
pinMode(5,OUTPUT);//green
pinMode(6,OUTPUT);//yellow
pinMode(7,OUTPUT);//red
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
pinMode(led, OUTPUT);
myservo.attach(4);

}
void loop()
{
sensorValue = analogRead(sensorPin);
smoke=analogRead(smk);
Serial.println("Noise level is:");
Serial.println(smoke);

Serial.println("light Value is:");

Serial.println(sensorValue);

if (sensorValue >800)

{

Serial.println("LED light off");

digitalWrite(led,LOW);

delay(1000);}
else {
  Serial.println("LED light off");

digitalWrite(led,HIGH);
 delay(1000);
}

   value = analogRead(sensorPin); 
 Serial.println("pollution present is : ");
 Serial.println(value);
//digitalWrite(10,HIGH);
/*Serial.println(analogRead(A0));
Serial.println(analogRead(A1));*/
delay(100);
int first=analogRead(A0);
int sec=analogRead(A1);
if(first>limit && sec<limit)
{
count++;
digitalWrite(13,HIGH);
digitalWrite(7,HIGH);
myservo.write(0);
delay(2000);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
}
else if(sec>limit && first<limit)
{
count++;
digitalWrite(5,HIGH);
digitalWrite(11,HIGH);
delay(2000);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
}
else{
digitalWrite(13,HIGH);
digitalWrite(7,HIGH);
myservo.write(180);

delay(1000);
digitalWrite(13,LOW);
digitalWrite(7,LOW);
myservo.write(90);


digitalWrite(12,HIGH);
digitalWrite(6,HIGH);
delay(1000);
digitalWrite(12,LOW);
digitalWrite(6,LOW);


digitalWrite(11,HIGH);
digitalWrite(5,HIGH);
delay(1000);
digitalWrite(11,LOW);
digitalWrite(5,LOW);



}
delay(3000);
}
