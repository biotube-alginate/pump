#include <Stepper.h>

// Define the number of steps for each motor
#define STEPS_PER_REV 200

// Create an instance of the Stepper class for the motor
Stepper stepper_motor(STEPS_PER_REV, 4, 5, 6, 7);

// Constants for lead screw and syringe dimensions
const float LEAD_SCREW_LEAD = 8.0; // Lead screw lead in mm (distance per rotation)
const float SYRINGE_DIAMETER = 26.5; // Syringe diameter in mm
const float NEEDLE_DIAMETER = 2.693; // Needle inner diameter in mm
const float EXTRUSION_MULTIPLIER = 1.3;

// Variables for dynamic speed control
unsigned long lastStepTime = 0;
float desiredRPM = 1.37; // Initial RPM for the motor

void setup()
{
  Serial.begin(9600);
  Serial.println("Enter the length (mm) to push:");
}

void loop()
{
  unsigned long currentTime = millis();

  // Check if there is serial input
  if (Serial.available() > 0)
  {
    // Wait for the complete input
    while (Serial.available() == 0) {}

    // Read the input length
    float lengthToPush = Serial.parseFloat();

    // Check if the input value is valid
    if (lengthToPush > 0)
    {
      float needleRadius = NEEDLE_DIAMETER / 2.0;
      float syringeRadius = SYRINGE_DIAMETER / 2.0;
      int stepsNeeded = (int)(lengthToPush * PI * needleRadius * needleRadius) / 
                        (PI * syringeRadius * syringeRadius) *
                        (STEPS_PER_REV / LEAD_SCREW_LEAD) * EXTRUSION_MULTIPLIER;

    // Calculate step delay based on desired RPM
    float stepDelay = (60.0 * 1000.0) / (STEPS_PER_REV * desiredRPM);
    
    // Control the motor to move the calculated steps
    for (int i = 0; i < stepsNeeded; i++)
    {
        // Move the motor one step at the desired speed
        if (currentTime - lastStepTime >= stepDelay) {
            stepper_motor.step(1);
            lastStepTime = currentTime;
        }
    
        // Update the current time
        currentTime = millis();
    }

      // Print the result to the serial monitor
      Serial.print("Length to push: ");
      Serial.print(lengthToPush);
      Serial.println(" mm");
      Serial.print("Steps needed: ");
      Serial.println(stepsNeeded);
      Serial.println("Enter the next length (mm) to push:");
    }
    else
    {
      Serial.println("Invalid input. Please enter a positive number.");
    }

    // Clear any remaining input buffer
    while (Serial.available() > 0)
    {
      Serial.read();
    }
  }
}