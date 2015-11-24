#ifndef USER_H
#define USER_H

#include <string>

class UserProvider; // class forward declaration. instead of including UserProvider

class User
{
    public:
        typedef std::string Username;

        enum Operation {
            READ = 1,
            WRITE = 2,
            READ_WRITE = READ | WRITE
        };

        User(const Username _username);

        virtual ~User();

        Username getName() const;
    protected:
    private:
        Username username;
};

#endif // USER_H
