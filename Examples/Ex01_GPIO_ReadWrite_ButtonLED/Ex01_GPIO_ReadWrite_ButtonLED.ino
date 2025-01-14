// Define the pin numbers
const int buttonPin = 2; // Push button connected to digital pin 2
const int ledPin = 13;   // LED connected to digital pin 13 (built-in LED)

void setup() 
{
  // Initialize the button pin as an input
  pinMode(buttonPin, INPUT);
  // Initialize the button pin as an input with an internal pull-up resistor
  pinMode(buttonPin, INPUT_PULLUP);
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() 
{
  // Read the state of the push button
  int buttonState = digitalRead(buttonPin);

  // Check if the push button is pressed
  if (buttonState == HIGH)      // button state is high, input is low input_pullup
  {
    // Turn the LED off
    digitalWrite(ledPin, LOW);
  } 
  else 
  {
    // Turn the LED on
    digitalWrite(ledPin, HIGH);
  }

  // Print the state of the push button and the LED
  Serial.print("Button state: ");
  Serial.print(buttonState == HIGH ? "RELEASED" : "PRESSED");
  Serial.print(" | LED state: ");
  Serial.println(buttonState == LOW ? "ON" : "OFF");

  // Small delay to avoid too much serial output
  delay(1000);
}
