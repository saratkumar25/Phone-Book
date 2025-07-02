#include "../include/PhoneBook.h"
#include <iostream>

int main() {
    PhoneBook pb;
    pb.loadFromFile("contacts.txt");

    int choice;
    std::string name, phone;

    do {
        std::cout << "\n--- PhoneBook Menu ---\n";
        std::cout << "1. Add Contact\n2. Delete Contact\n3. Edit Contact\n";
        std::cout << "4. Display Contacts\n5. Search Contact\n6. Save & Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter name and phone: ";
            std::cin >> name >> phone;
            pb.addContact(Contact(name, phone));
            break;
        case 2:
            std::cout << "Enter name to delete: ";
            std::cin >> name;
            pb.deleteContact(name);
            break;
        case 3:
            std::cout << "Enter name to edit: ";
            std::cin >> name;
            pb.editContact(name);
            break;
        case 4:
            pb.displayAllContacts();
            break;
        case 5:
            std::cout << "Enter name to search: ";
            std::cin >> name;
            pb.searchContact(name);
            break;
        case 6:
            pb.saveToFile("contacts.txt");
            std::cout << "Contacts saved. Goodbye!\n";
            break;
        default:
            std::cout << "Invalid choice.\n";
        }
    } while (choice != 6);
    return 0;
}
