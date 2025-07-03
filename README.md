# PhoneBook – A Simple Contact Manager in C++

This project is a beginner-friendly C++ application for managing contacts like names and phone numbers. It allows you to perform common operations such as adding, editing, deleting, and searching contacts, while learning fundamental Data Structures and Algorithms (DSA).

##  Features

- Add, view, edit, and delete contacts
- Search contacts by name
- Alphabetically sort contacts using sorting algorithms
- File persistence: Save/load contacts to/from `contacts.txt`
- Structured using OOP principles
- Modular code using separate `.h` and `.cpp` files

---

##  Learning Outcomes

- Working with arrays, vectors, and file handling
- Implementing CRUD operations
- Understanding linear and binary search
- Applying sorting (e.g., merge or quick sort)
- Time complexity analysis of common operations
- Clean code organization with header and source files

---

##  Project Structure
```bash
PhoneBook/
├── include/
│ ├── Contact.h 
│ └── PhoneBook.h 
├── src/
│ ├── Contact.cpp 
│ ├── PhoneBook.cpp 
│ └── main.cpp 
├── contacts.txt 
└── README.md 
```

---

##  How to Compile

```bash
g++ -Iinclude src/Contact.cpp src/PhoneBook.cpp src/main.cpp -o PhoneBookApp
```
## How to Run

```bash
.\PhoneBookApp.exe   #Windoqws
./PhoneBookApp       #Linux
```
## Menu Options 
```bash
--- PhoneBook Menu ---
1. Add Contact
2. Delete Contact
3. Edit Contact
4. Display Contacts
5. Search Contact
6. Save & Exit
```
## Real-World Applications

- Personal contact management
- Emergency contact directory for hospitals
- Customer phone database for small businesses

## Future Enhancements

- Store additional fields (email, address, etc.)
- Advanced search/filtering
- GUI using Qt or web-based frontend
- Import/export contacts in CSV format
