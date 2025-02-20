// Define the pin number for the built-in LED
const int ledPin = 13;

void setup() 
{
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  delay(1000); // Wait for 1 second
  
  // Turn the LED off
  digitalWrite(ledPin, LOW);
  delay(1000); // Wait for 1 second
}
