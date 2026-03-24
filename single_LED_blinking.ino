#define LED 2   // LED connected to digital pin 2

void setup() {
    pinMode(LED, OUTPUT);   // Set pin 2 as output
}

void loop() {
    digitalWrite(LED, HIGH); // Turn LED ON
    delay(1000);             // Wait for 1 second

    digitalWrite(LED, LOW);  // Turn LED OFF
    delay(1000);             // Wait for 1 second
}