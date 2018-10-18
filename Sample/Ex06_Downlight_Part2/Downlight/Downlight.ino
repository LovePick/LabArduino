
const int analogOutPin = 9;
const int analogInput = A0;

int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(analogOutPin, OUTPUT);
  pinMode(analogInput, INPUT);

}

void loop() {
  sensorValue = analogRead(analogInput);
  Serial.println(sensorValue);

}
