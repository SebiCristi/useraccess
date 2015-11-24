#ifndef WIKI_H
#define WIKI_H
#include "User.h"
#include <string>
#include <vector>
#include <map>

using namespace std;
class Wiki
{

    public:
        Wiki(std::string _page);
        virtual ~Wiki();
        bool isAllowed(User username) const;
    protected:
    private:
        std::string page;
        std::map<std::string, std::vector<string>> initializeUsernames() const;
};

#endif // WIKI_H
