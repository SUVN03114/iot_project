int sensorPin = A0; 
int sensorValue;  
int limit = 700; 

void setup() {
 Serial.begin(9600);
 
}

void loop() {

 sensorValue = analogRead(sensorPin); 
 Serial.println("pollution present is : ");
 Serial.println(sensorValue);
 

 delay(1000); 
}
