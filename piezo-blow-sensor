int blowSensor = A0;
int sensorReading = 0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorReading = analogRead(blowSensor);
byte byteToSend = map(sensorReading, 0, 1023, 0, 255);

//Serial.print("Blow Sensor: ");
Serial.println(sensorReading);

delay(5);

} 
