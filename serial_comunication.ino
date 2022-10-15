void setup() {
  for (int x = 3; x <= 10; x++) {
    pinMode(x, OUTPUT);
    digitalWrite(x, HIGH);
  }
  Serial.begin(9600);

}
void loop() {
  String textoveHodnoty;
  textoveHodnoty = Serial.readString();
  int delka = textoveHodnoty.length();
  String rozdelenaHodnota;
  int rozdelenaHodnota2;
  for (int x = 0; x <= delka; x++) {
    Serial.println(textoveHodnoty.charAt(x));
    rozdelenaHodnota = textoveHodnoty.charAt(x);
    rozdelenaHodnota2 = rozdelenaHodnota.toInt();
    pinMode(rozdelenaHodnota2 + 2, OUTPUT);
    if(digitalRead(rozdelenaHodnota2 + 2)==HIGH){
         digitalWrite(rozdelenaHodnota2 + 2, LOW);
    }else{
         digitalWrite(rozdelenaHodnota2 + 2, HIGH);
    }   
  }
}
