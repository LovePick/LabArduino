
const int analogOutPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(analogOutPin, OUTPUT);

}

void loop() {

  analogWrite(analogOutPin, 0);
  delay(1000);

  analogWrite(analogOutPin, 85);
  delay(1000);

  analogWrite(analogOutPin, 85);
  delay(1000);

  analogWrite(analogOutPin, 170);
  delay(1000);

  analogWrite(analogOutPin, 255);
  delay(1000);
}
