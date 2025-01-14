int ledPin = 9; // PWM GPIO pin
int brightness = 0; // Initial brightness level
int fadeAmount = 5; // Amount to change the brightness each loop

void setup() 
{
  pinMode(ledPin, OUTPUT); // Set the ledPin as an output
}

void loop() 
{
  analogWrite(ledPin, brightness); // Set the brightness of the LED

  // Change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // Reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) 
  {
    fadeAmount = -fadeAmount;
  }

  delay(30); // Pause for 30 milliseconds to see the fading effect
}
