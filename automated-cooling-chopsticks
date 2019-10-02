int fan = 3;
int fanVal;
int sensorPin = A0;
int sensorVal;


void setup() {
pinMode(sensorPin, INPUT); // set the thermistor's input pin
pinMode(fan, OUTPUT); // set the fan's output pin
Serial.begin(9600); 
}

void loop() {
//put your main code here, to run repeatedly:

sensorVal = analogRead(sensorPin); // read the thermistor
delay(1000);

fanVal = map(sensorVal, 380, 600, 26, 255); // map and assign pwm values to fan output 0 to 255


if(sensorVal >370){
  fanVal = HIGH;
}
if(sensorVal <370){
  fanVal = LOW;
}

//write the fanVal value to fan output pin
digitalWrite(fan, fanVal);


// print values:
Serial.print ("thermistor: ");
Serial.println(sensorVal);
Serial.print ("\t"); 
Serial.print ("fan: ");
Serial.println (fanVal);
Serial.print ("\t"); 

}
