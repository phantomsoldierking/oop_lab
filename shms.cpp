#include "shms.h"
#include "auth.h"

void SHMS::add_device(Device* device) {
    devices.push_back(device);
}

void SHMS::remove_device(int device_id) {
    // Remove device logic here
}

void SHMS::login_user(const std::string& username, const std::string& password) {
    Authentication auth;
    for (auto& user : users) {
        if (user.get_username() == username) {
            if (auth.validate(user, password)) {
                // User authenticated
                return;
            }
        }
    }
}

void SHMS::switch_mode(Mode* new_mode) {
    current_mode = new_mode;
    current_mode->apply_mode();
}
