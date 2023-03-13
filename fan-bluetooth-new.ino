
char incomingValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);

}

void loop() {
  if(Serial.available() > 0) {
    incomingValue = Serial.read();
    if (incomingValue == '0') {
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      Serial.println("OFF");
      
    } else if (incomingValue == '1') {
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      Serial.println("LOW");
      
    } else if (incomingValue == '2') {
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      Serial.println("MED");
      
    } else if (incomingValue == '3') {
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      Serial.println("HIGH");
    }
  }
}
