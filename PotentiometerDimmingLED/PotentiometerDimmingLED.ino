int ledPin = 2;
int poten = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int statePoten;
  statePoten = analogRead(poten);
  int pwmValue = map(statePoten, 0, 1023, 0, 255);
  analogWrite(ledPin, pwmValue);
  Serial.print("Potentiometer value: ");
  Serial.print(statePoten);
  Serial.print("PWM: ");
  Serial.println(pwmValue);x
  
}
