#ifndef DEVICE_H
#define DEVICE_H

#include <string>

class Device {
public:
    Device(int id,const std::string& name);
    void turn_on();
    void turn_off();
    bool is_on() const;
    int get_id() const;
    std::string get_name() const;

private:
    int id;
    std::string name;
    bool status; // true for on, false for off
};

#endif // DEVICE_H
