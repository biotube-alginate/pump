#include <Stepper.h>

// Define the number of steps for each motor
#define STEPS 200

// Create instances of the Stepper class for each motor
Stepper stepper(STEPS, 4, 5, 6, 7);

// Variables to keep track of the last step time for each motor
unsigned long lastStepTime = 0;

// Variables for left motor speed control
float desiredRPM = 0.2; // Initial RPM for left motor
float minRPM = 0.1; // Minimum RPM for left motor
float maxRPM = 5; // Maximum RPM for left motor

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  unsigned long currentTime = millis();

  // Read analog values from potentiometers
  int analogValue = analogRead(A0);

  // Map analog values to desired RPM ranges
  desiredRPM = map(analogValue, 0, 1023, minRPM * 1000, maxRPM * 1000) / 1000.0;

  // Calculate step delays for each motor
  float stepDelay = (60.0 * 1000.0) / (STEPS * desiredRPM);

  // Control Left Motor
  if (currentTime - lastStepTime >= stepDelay) {
    // int stepsToTakeLeft = (currentTime - lastStepTime) / stepDelay;
    // stepper.step(-stepsToTakeLeft);
    stepper.step(1);
    lastStepTime = currentTime;
  }
}