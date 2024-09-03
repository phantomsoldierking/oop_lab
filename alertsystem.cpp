#include "alertsystem.h"
#include <iostream>

void AlertSystem::send_sms(const std::string& message) {
    std::cout << "Sending SMS: " << message << "\n";
    // Add actual SMS sending logic here
}

void AlertSystem::make_call(const std::string& message) {
    std::cout << "Making call: " << message << "\n";
    // Add actual call logic here
}
