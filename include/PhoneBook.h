#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h"
#include <vector>

class PhoneBook {
private:
    std::vector<Contact> contacts;
    void sortContacts();

public:
    void loadFromFile(const std::string& filename);
    void saveToFile(const std::string& filename);
    void addContact(const Contact& contact);
    void deleteContact(const std::string& name);
    void editContact(const std::string& name);
    void displayAllContacts() const;
    void searchContact(const std::string& name) const;
};

#endif
