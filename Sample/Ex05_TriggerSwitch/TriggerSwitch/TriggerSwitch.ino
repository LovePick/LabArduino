
const int buttonPin = 2;
const int ledPin = 13;


bool pressing = false;

bool ledState = false;

void setup() {
  
 Serial.begin(9600);
 pinMode(buttonPin, INPUT);
 pinMode(ledPin, OUTPUT);
 
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if(pressing == false){
    
    if(buttonState == 1){
      pressing = true;
      Serial.println("Press");
      
      ledState = !ledState;
      
      delay(100);
    }
    
  }else{
    
    if(buttonState == 0){
      pressing = false;
      Serial.println("Release");
      delay(100);
    }
    
  }

  digitalWrite(ledPin, ledState);

}
