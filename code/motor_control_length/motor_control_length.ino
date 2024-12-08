#include <Stepper.h>
#define STEPS_PER_REV 200
Stepper stepper_motor(STEPS_PER_REV, 4, 5, 6, 7);

const float LEAD_SCREW_LEAD = 8.0; // Lead screw lead in mm (distance per rotation)
const float SYRINGE_DIAMETER = 26.5; // Syringe diameter in mm
const float NEEDLE_DIAMETER = 2.693; // Needle inner diameter in mm
const float EXTRUSION_MULTIPLIER = 2;

void setup()
{
  Serial.begin(9600);
  Serial.println("Enter the length (mm) to push:");

  stepper_motor.setSpeed(1.37);
}

void loop()
{
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

      // Move the stepper motor
      stepper_motor.step(stepsNeeded);

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
