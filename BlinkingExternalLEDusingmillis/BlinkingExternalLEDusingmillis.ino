int ledPin = 2;
unsigned long prevTime = 0;
const unsigned long interval = 1000; // so the LED blinks once in 1 second
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,  OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentTime = millis();
  
  if (currentTime-prevTime >= interval){
    prevTime = currentTime;
    digitalWrite(ledPin, !digitalRead(ledPin));
    /*this !digitalRead(ledPin) gives ledPin the opposite state of ledPin. 
    //so if the ledPin actually is in LOW state then it gives the ledPin to be HIGH and vice versa*/
  }
}