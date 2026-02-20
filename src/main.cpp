#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1: Define touch sensor digital pin (Use pin 2)
const int TOUCH_PIN = 2;

// TODO 2: Create variable to store touch state
int touchState = LOW;

void setup() {

    // TODO 3: Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4: Configure touch pin as INPUT
    pinMode(TOUCH_PIN, INPUT);

    // TODO 5: Print system initialization message
    Serial.println("======================================");
    Serial.println(" Embedded Touch Detection System ");
    Serial.println("======================================");
    Serial.println("Monitoring TTP223 sensor on Pin 2...");
}

void loop() {

    // TODO 6: Read digital value from touch sensor
    touchState = digitalRead(TOUCH_PIN);

    // TODO 7: Check touch condition
    if (touchState == HIGH) {
        Serial.println("Touch Detected");
    } 
    else {
        Serial.println("No Touch");
    }

    Serial.println("------------------------------");
    
    // TODO 8:
    // Add small delay (200–500ms)
}
