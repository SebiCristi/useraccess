#ifndef DBUSERPROVIDER_H
#define DBUSERPROVIDER_H

#include "UserProvider.h"

class DBUserProvider : public UserProvider
{
    public:
        DBUserProvider();
        virtual ~DBUserProvider();

        virtual std::map<User::Username, User::Operation> getAllowedUsernames() const;
};

#endif // DBUSERPROVIDER_H
