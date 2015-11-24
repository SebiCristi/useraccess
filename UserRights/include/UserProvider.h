#ifndef USERPROVIDER_H
#define USERPROVIDER_H

#include "User.h"
#include <map>

class UserProvider
{
public:
    virtual ~UserProvider() {};

    virtual std::map<User::Username, User::Operation> getAllowedUsernames() const = 0; // virtual = 0 means that derived classes MUST implement this method
};

#endif // USERPROVIDER_H
