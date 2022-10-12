void setup() {
  for (int x = 3; x <= 10; x++) {
    pinMode(x, OUTPUT);
    digitalWrite(x, HIGH);
  }
  pinMode(A3, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A3);
  // ((I - MIN)/(MAX - MIN))/8
  Serial.println(sensorValue);
  int ledka = ((sensorValue - 40) / ((200 - 40 ) / 8));
  Serial.println(ledka);
  for (int x = 3; x <= ledka; x++) {
    pinMode(x, OUTPUT);
    digitalWrite(x, LOW);
  }
  delay(100);
  for (int x = ledka; x >= 3; x--) {
    pinMode(x, OUTPUT);
    digitalWrite(x, HIGH);
  }

}
