#ifndef AUTH_H
#define AUTH_H

#include "user.h"

class Authentication {
public:
    bool validate(const User& user, const std::string& password);
};

#endif // AUTH_H
