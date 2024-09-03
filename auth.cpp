#include "auth.h"

bool Authentication::validate(const User& user, const std::string& password) {
    return user.authenticate(password);  // Now works with const User&
}
