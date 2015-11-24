#include "StaticMapUserProvider.h"

std::map<User::Username, User::Operation> initializeUsernames() {

    std::map<User::Username, User::Operation> usernames;

    usernames["admin"] = User::READ;
    usernames["administrator"] = User::WRITE;
    usernames["root"] = User::READ_WRITE;

    return usernames;
}

StaticMapUserProvider::StaticMapUserProvider()
{
}

StaticMapUserProvider::~StaticMapUserProvider()
{
}

std::map<User::Username, User::Operation> StaticMapUserProvider::getAllowedUsernames() const {
    return initializeUsernames();
}
