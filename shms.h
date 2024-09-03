#ifndef SHMS_H
#define SHMS_H

#include <vector>
#include "device.h"
#include "sensor.h"
#include "user.h"
#include "mode.h"
#include "alertsystem.h"

class SHMS {
public:
    void add_device(Device* device);
    void remove_device(int device_id);
    void login_user(const std::string& username, const std::string& password);
    void switch_mode(Mode* new_mode);

private:
    std::vector<Device*> devices;
    std::vector<User> users;
    Mode* current_mode;
    AlertSystem alert_system;
};

#endif // SHMS_H
