void setup() {
  DDRB=B11100000; // set digital pin 13 to the OUTPUT state
}

void loop() {
  PORTB=B11100000; // set digital pin 13 to HIGH
  delay(100);
  PORTB=B11000000; // set digital pin 13 to LOW
  delay(100);
}

