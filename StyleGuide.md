## Style Guide

# File names:
    lowercase_snake_case (e.g., main.cpp)

# Class names:
    PascalCase (e.g., class MotorController)

# Pin names:
    PIN_ prefix with UPPERCASE (e.g., PIN_STATUS_LED)

# Variable names:
    camelCase (e.g., currentSpeed)

# Example

```cpp
// File name: motor_control.cpp

#include <iostream>

// Pin names
const int PIN_STATUS_LED = 13;
const int PIN_MOTOR_PWM = 5;

// Class names
class MotorController {
private:
    // Variable names
    int currentSpeed;
    bool isRunning;

public:
    MotorController() {
        currentSpeed = 0;
        isRunning = false;
    }

    void setSpeed(int targetSpeed) {
        currentSpeed = targetSpeed;
    }
};

int main() {
    MotorController myController;
    myController.setSpeed(150);
    return 0;
}
```