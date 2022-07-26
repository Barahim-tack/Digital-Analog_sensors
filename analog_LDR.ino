int LED = 13;
int sensorValue = 0;

void setup() {
pinMode(LED,OUTPUT);

}

void loop() {
sensorValue = analogRead(A0);   // the sensor value will be between 0 - 1024 

if(sensorValue < 500) {
  digitalWrite(LED,HIGH);
}

else {
  digitalWrite(LED,LOW);
}

}
