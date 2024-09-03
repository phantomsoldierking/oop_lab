#ifndef ALERTSYSTEM_H
#define ALERTSYSTEM_H

#include <string>

class AlertSystem {
public:
    void send_sms(const std::string& message);
    void make_call(const std::string& message);
};

#endif // ALERTSYSTEM_H
