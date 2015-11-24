#ifndef STATICMAPUSERPROVIDER_H
#define STATICMAPUSERPROVIDER_H

#include "UserProvider.h"

class StaticMapUserProvider : public UserProvider
{
    public:
        StaticMapUserProvider();
        virtual ~StaticMapUserProvider();

        virtual std::map<User::Username, User::Operation> getAllowedUsernames() const;
};

#endif // STATICMAPUSERPROVIDER_H
