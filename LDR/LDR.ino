int ledPin = 3;
int ldr = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrState;
  ldrState = analogRead(ldr);
  int pwmValue = map(ldrState, 0, 1023, 0, 255);
  analogWrite(ledPin, pwmValue);
  Serial.print("LDR VALUE: ");
  Serial.print(ldrState);
  Serial.print("PWM: ");
  Serial.println(pwmValue);
}
