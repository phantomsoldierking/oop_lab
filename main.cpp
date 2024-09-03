#include <bits/stdc++.h>

#include "device.h"
#include "sensor.h"
#include "user.h"
#include "shms.h"
#include "mode.h"
#include "alertsystem.h"
#include "auth.h"


int main() {
    // Step 1: Create the SHMS instance
    SHMS shms;

    // Step 2: Create devices and sensors
    Device* light = new Device(1, "Light");
    Sensor* temperatureSensor = new Sensor(2, "Temperature Sensor", 25.5);

    // Add devices and sensors to SHMS
    shms.add_device(light);
    shms.add_device(temperatureSensor);

    // User authentication
    User user("admin", "password123");
    Authentication auth;

    std::string entered_password;
    std::cout << "Enter password for user " << user.get_username() << ": ";
    std::cin >> entered_password;

    if (auth.validate(user, entered_password)) {
        std::cout << "Authentication successful!" << std::endl;
    } else {
        std::cout << "Authentication failed!" << std::endl;
        return 1;
    }

    // Switch to Manual Mode
    ManualMode manualMode;
    shms.switch_mode(&manualMode);

    // Control devices manually
    shms.add_device(light);  // Turn on the light (ID 1)
    shms.remove_device(light->get_id()); // Turn off the light (ID 1)

    // Switch to Automatic Mode
    AutomaticMode autoMode;
    shms.switch_mode(&autoMode);

    // Triggering alert system
    AlertSystem alertSystem;
    alertSystem.send_sms("Fire detected! Sending alert...");

    std::cout << "SHMS simulation completed." << std::endl;

    // Clean up dynamically allocated memory
    delete light;
    delete temperatureSensor;

    return 0;
}
