#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(const std::string& username, const std::string& password);
    bool authenticate(const std::string& entered_password) const;  // Ensure 'const' is here
    std::string get_username() const;

private:
    std::string username;
    std::string password;
};

#endif // USER_H
