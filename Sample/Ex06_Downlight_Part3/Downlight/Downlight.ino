
const int analogOutPin = 9;
const int analogInput = A0;

int sensorValue = 0;
int mapValue = 0;

int myMap(int sensor, int sMin, int sMax, int outMin, int outMax); 

void setup() {
  Serial.begin(9600);
  pinMode(analogOutPin, OUTPUT);
  pinMode(analogInput, INPUT);

}

void loop() {
  sensorValue = analogRead(analogInput);

  mapValue = myMap(sensorValue, 0, 1023, 0, 255);
  Serial.println(mapValue);

  

}

int myMap(int sensor, int sMin, int sMax, int outMin, int outMax){
  int valuse = 0;

  double deltaIn = sMax - sMin;
  double deltaOut = outMax - outMin;

  double k = deltaOut/deltaIn;

  valuse = (k * sensor) + outMin;
  
  return valuse;
}
