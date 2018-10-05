
// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin = 13;

void setup() {

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);

  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);

}

void loop() {

  // read the state of the pushbutton value:
  int buttonState = digitalRead(buttonPin);

  
  digitalWrite(ledPin, buttonState);
  
} 
