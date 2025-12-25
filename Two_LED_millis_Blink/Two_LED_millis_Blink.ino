int ledPin1 = 2;
unsigned long prevTime1 = 0;
const unsigned long interval1 = 1000; //cause i want it to be 1 sec delay for LED 1

int ledPin2 = 3;
unsigned long prevTime2 = 0;
const unsigned long interval2 = 300; // cause i want it to be a 300ms delay for LED 2

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currenTime = millis();
  if (currenTime - prevTime1 >= interval1){
    prevTime1 = currenTime;
    digitalWrite(ledPin1, !digitalRead(ledPin1));
  }

  if (currenTime - prevTime2 >= interval2){
    prevTime2 = currenTime;
    digitalWrite(ledPin2, !digitalRead(ledPin2));
  }

}