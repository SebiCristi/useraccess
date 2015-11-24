#include "Wiki.h"
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include "User.h"

using namespace std;
Wiki::Wiki(string _page)
:page(_page) // intializare: setez membrul page cu valoarea _page
{
}

Wiki::~Wiki()
{
}

bool Wiki::isAllowed(User username) const
{
    std::map<string, std::vector<string>> pages = initializeUsernames();
    const std::map<string, std::vector<string> >::iterator it= pages.find(page);

    if ( (it != pages.end())) {
        std::vector<string> temp=(it->second);
        std::vector<string>::iterator tempIt = find(temp.begin(),temp.end(),(string)username.getName());
        if (tempIt != temp.end()){

            return true;
            }
        }
    return false;
}
std::map<string, std::vector<string>> Wiki::initializeUsernames() const {

cout << "Inside the initializeUsernames function" << endl;
std::map<string, std::vector<string> > pages;// nu e corect, initializarea se facfe intr-o metoda.

std::vector<string> users1;
users1.push_back("vasile");
users1.push_back("giani");
users1.push_back("ion");

std::vector<string> users2;
users2.push_back("gigi");
users2.push_back("John");
users2.push_back("Abel");

std::vector<string> users3;
users3.push_back("Rob");
users3.push_back("Mike");
users3.push_back("Kia");

pages["page1"] = users1;
pages["page2"] = users2;
pages["page3"] = users3;

    return pages;
}
