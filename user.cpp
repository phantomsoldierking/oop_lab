#include "user.h"

User::User(const std::string& username, const std::string& password)
    : username(username), password(password) {}

bool User::authenticate(const std::string& entered_password) const {  // Ensure 'const' is here
    return password == entered_password;
}

std::string User::get_username() const {
    return username;
}
