#include "device.h"



Device::Device(int id,const std::string &name)
{
}

void Device::turn_on()
{
    status = true;
}

void Device::turn_off() {
    status = false;
}

bool Device::is_on() const {
    return status;
}

int Device::get_id() const {
    return id;
}

std::string Device::get_name() const {
    return name;
}
