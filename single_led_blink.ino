// Arduino Single LED Blink
// Author: Pratham Bang
// Description: Blinks a single LED connected to a digital pin.

const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // LED ON
  delay(1000);                // wait 1 second

  digitalWrite(ledPin, LOW);  // LED OFF
  delay(1000);                // wait 1 second
}
