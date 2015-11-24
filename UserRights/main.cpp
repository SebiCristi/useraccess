#include <iostream>
#include <string>
#include <set>
#include <map>
#include "User.h"
#include "StaticMapUserProvider.h"
#include "DBUserProvider.h"
#include "Wiki.h"

// Extending app to check if Allowed to access a Resource (E.g. wiki page)

using namespace std;

void success(const User& user) {
    cout << "Hello " << user.getName() << "!" << endl;
}

void error(const User& user) {
    cout << "Invalid username " << user.getName() << ". Goodbye!" << endl;
}

int main()
{
    User::Username username;
    Wiki* page = new Wiki("page1");

    do {
        cout << "Enter username: ";
        cin >> username;
        const User user(username);

        if (page->isAllowed(user)) {
            success(user);
        } else {
            error(user);
        }
    } while (username.length() > 0);

    return 0;
}
