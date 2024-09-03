#include "sensor.h"

Sensor::Sensor(int id,const  std::string name, double reading)
    : Device(id, name), reading(reading) {}

int Sensor::get_reading() const {
    return reading;
}

void Sensor::update_reading(int new_reading) {
    reading = new_reading;
}
