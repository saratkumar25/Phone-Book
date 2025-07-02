#include "PhoneBook.h"
#include <iostream>
#include <fstream>
#include <algorithm>

void PhoneBook::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    contacts.clear();
    std::string name, phone;
    while (file >> name >> phone) {
        contacts.push_back(Contact(name, phone));
    }
}

void PhoneBook::saveToFile(const std::string& filename) {
    std::ofstream file(filename);
    for (auto& contact : contacts) {
        file << contact.name << " " << contact.phone << "\n";
    }
}

void PhoneBook::addContact(const Contact& contact) {
    contacts.push_back(contact);
    sortContacts();
}

void PhoneBook::deleteContact(const std::string& name) {
    auto it = std::remove_if(contacts.begin(), contacts.end(),
        [&](Contact& c) { return c.name == name; });
    contacts.erase(it, contacts.end());
}

void PhoneBook::editContact(const std::string& name) {
    for (auto& contact : contacts) {
        if (contact.name == name) {
            std::cout << "New phone number: ";
            std::cin >> contact.phone;
            break;
        }
    }
}

void PhoneBook::displayAllContacts() const {
    for (const auto& contact : contacts) {
        std::cout << contact.name << " : " << contact.phone << "\n";
    }
}

void PhoneBook::searchContact(const std::string& name) const {
    for (const auto& contact : contacts) {
        if (contact.name == name) {
            std::cout << "Found: " << contact.name << " - " << contact.phone << "\n";
            return;
        }
    }
    std::cout << "Contact not found.\n";
}

void PhoneBook::sortContacts() {
    std::sort(contacts.begin(), contacts.end(),
              [](Contact& a, Contact& b) { return a.name < b.name; });
}