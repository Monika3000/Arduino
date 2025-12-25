int ledPin = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(1000);
  Serial.println("Its Glowing Now!");
  digitalWrite(ledPin, LOW);
  Serial.println("Its Off Now!");
  delay(1000);
}
