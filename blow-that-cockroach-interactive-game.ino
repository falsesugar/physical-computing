int blowSensor1 = A0;
int sensorReading1 = 0;
int blowSensor2 = A7;
int sensorReading2 = 0;

int pushButton = A5; // choose the pin for the button


void setup() {
  Serial.begin(9600);
  
  pinMode(pushButton, INPUT_PULLUP);
}

void loop() {

 // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:

  
  sensorReading1 = analogRead(blowSensor1);
  byte byteToSend1 = map(sensorReading1, 0, 1023, 0, 255);

  sensorReading2 = analogRead(blowSensor2);
  byte byteToSend2 = map(sensorReading2, 0, 1023, 0, 255);

  String combined = String(buttonState) + ' ' + String(byteToSend1) + ' ' + String(byteToSend2);
  Serial.println(combined);

  delay(50);

} 
