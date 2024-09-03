#ifndef SENSOR_H
#define SENSOR_H

#include "device.h"

class Sensor : public Device {
public:
    Sensor(int id,const std::string name, double reading);
    int get_reading() const;
    void update_reading(int new_reading);

private:
    int reading;
};

#endif // SENSOR_H
