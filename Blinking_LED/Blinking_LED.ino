int ledPin=2;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  Serial.println("On");
  delay(2000);
  digitalWrite(ledPin, LOW);
  Serial.println("Off");
  delay(2000);
}

