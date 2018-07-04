int pin_LED = 13;

void setup() {
  pinMode(pin_LED, OUTPUT);     
}

void loop() {
  digitalWrite(pin_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // wait for a second
  digitalWrite(pin_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // wait for a second
}
