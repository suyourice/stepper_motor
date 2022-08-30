const int stepPin = 5;
const int dirPin = 2;
const int enPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(stepPin,OUTPUT);
  pinMode(dirPin,OUTPUT);
  pinMode(enPin,OUTPUT);
  digitalWrite(enPin,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  for (int x = 0; x < 800; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(500);
  }
  delay(1000);
}
