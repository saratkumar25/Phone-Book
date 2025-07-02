#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
public:
    std::string name;
    std::string phone;

    Contact(std::string name = "", std::string phone = "");
};

#endif
