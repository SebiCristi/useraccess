#include "User.h"
#include "UserProvider.h"
#include <iostream>
#include <map>

using namespace std;

User::User(const Username _username)
: username(_username)
{
}

User::~User()
{
}

User::Username User::getName() const {
    return username;
}
