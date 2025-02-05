### Arduino Code for Driving Stepper Motor

We used a Usongshine Nema 17 stepper motor, driven by Adafruit's TB6612 motor driver breakout board. For hardware assembly, we followed [this Adafruit tutorial](https://learn.adafruit.com/adafruit-tb6612-h-bridge-dc-stepper-motor-driver-breakout/using-stepper-motors). The Arduino code was modified to enable the stepper motor to accept RPM values as floating-point numbers.


- **`motor_control_single`**: Arduino code for controlling a single stepper motor, suitable for the main syringe pump setup described [here](../README.md)). In our primary setup, we used a fixed motor speed. However, the code also provides an option to read an analog input from pin A0 (e.g., connected to a voltage divider circuit with a potentiometer) for real-time motor speed adjustment.

- **`motor_control`**: similar to **`motor_control_single`** but offers control over to three stepper motors.

- **`motor_control_length`**: Similar to **`motor_control_single`** (for continuous fiber spinning), but with the added ability to specify the desired fiber length.