int buzzer = 3;
int sensorPin = 2;
int sensorValue = 0;  

void setup() {
pinMode(buzzer,OUTPUT);
}

void loop() {
sensorValue = digitalRead(sensorPin);

if (sensorValue == 0){
  digitalWrite(buzzer,HIGH);
}

else {
  digitalWrite(buzzer,LOW);
}

delay(100);
}
