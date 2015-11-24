#include "DBUserProvider.h"

std::map<User::Username, User::Operation> DBinitializeUsernames() {
    std::map<User::Username, User::Operation> usernames;

    usernames["root"] = User::READ;
    usernames["joe"] = User::WRITE;
    usernames["wee"] = User::READ_WRITE;

    return usernames;
}

DBUserProvider::DBUserProvider()
{
}

DBUserProvider::~DBUserProvider()
{
}

std::map<User::Username, User::Operation> DBUserProvider::getAllowedUsernames() const {
    return DBinitializeUsernames();
}
