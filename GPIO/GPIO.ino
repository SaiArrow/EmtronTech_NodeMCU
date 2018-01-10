uint8_t Pin = D4;       // declare LED pin on NodeMCU Dev Kit

void setup() {
pinMode(Pin, INPUT);   // Initialize the LED pin as an output
}

void loop() {
Serial.begin(115200);
Serial.println(digitalRead(Pin));
delay(1000);                // Wait for a second
}
