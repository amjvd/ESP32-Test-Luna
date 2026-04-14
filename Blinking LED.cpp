const int ledPin = 14;
void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  Serial.println("Hello, ESP32. Type '1' for ON, '0' for OFF.");
}

void loop() {
  if (Serial.available() > 0) {
    char incomingByte = Serial.read();
    if (incomingByte == '1'){
      digitalWrite(ledPin, HIGH);
      Serial.println("Motor ON");
    }
    else if (incomingByte == '0') {
      digitalWrite(ledPin, LOW);
      Serial.println("Motor OFF");
    }
  }

}
