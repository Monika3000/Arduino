int pushbutton = 3 ;
int ledPin = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(pushbutton, INPUT_PULLUP); // We use INPUT_PULLUP since when the push button isnt pressed that is when it is HIGH, the button gives float values means unstable results
  // such as ON or OFF. So to avoid this problem and to make sure that during HIGH (means when button is not pressed) it has to be in OFF STATE ONLY AND WHEN IT IS PUSHED IT HAS
  //TO BE IN ON STATE ONLY.
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState;
  buttonState = digitalRead(pushbutton);

  if (buttonState == HIGH){ //Here if buttonState is HIGH that means the push button is not pressed
    digitalWrite(ledPin, LOW);
    Serial.println("LED'S TURNED OFF");
    

  }else{
    digitalWrite(ledPin, HIGH);
    Serial.println("LED'S TURNED ON!!");
  }
  delay(3000);
}
