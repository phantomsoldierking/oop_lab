#include "mode.h"
#include <iostream>

void ManualMode::apply_mode() {
    std::cout << "Applying Manual Mode: Users must manually control all devices.\n";
    // Add specific logic for manual mode here
}

void AutomaticMode::apply_mode() {
    std::cout << "Applying Automatic Mode: Devices are controlled based on environmental conditions.\n";
    // Add specific logic for automatic mode here
}
