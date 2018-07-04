int pin_LED = 13;
# define HWSERIAL Serial1

void setup() {
  pinMode(pin_LED, OUTPUT);
  
  // Set baud rate to 500000 
  // Fastest speed for Teensy LC before errors occuring
  // See here: https://www.pjrc.com/teensy/td_uart.html
  int baud_rate = 500000;
  Serial.begin(baud_rate);    // USB Serial 
  HWSERIAL.begin(baud_rate);  // Hardware Serial (RX & TX pins)    
}

void loop() {
  // LED ON
  digitalWrite(pin_LED, HIGH);
  delay(500);
  Serial.write("LED ON");
  HWSERIAL.write("LED ON");
  
  // LED OFF
  digitalWrite(pin_LED, LOW);
  delay(500);
  Serial.write("LED OFF");
  HWSERIAL.write("LED OFF");
}
