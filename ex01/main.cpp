#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
    PhoneBook phoneBook;
    std::string command;

    std::cout << "Welcome to 80's PhoneBook!" << std::endl;

    while (true) {
        std::cout << "\nEnter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command)) {
            std::cout << "\nInput error. Exiting." << std::endl;
            break;
        }

        if (command == "ADD") {
            Contact c;
            std::string input;

            do {
                std::cout << "First Name: ";
                std::getline(std::cin, input);
            } while (input.empty());
            c.setFirstName(input);

            do {
                std::cout << "Last Name: ";
                std::getline(std::cin, input);
            } while (input.empty());
            c.setLastName(input);

            do {
                std::cout << "Nickname: ";
                std::getline(std::cin, input);
            } while (input.empty());
            c.setNickName(input);

            do {
                std::cout << "Phone Number: ";
                std::getline(std::cin, input);
            } while (input.empty());
            c.setPhoneNumber(input);

            do {
                std::cout << "Darkest Secret: ";
                std::getline(std::cin, input);
            } while (input.empty());
            c.setDarkestSecret(input);

            phoneBook.addContact(c);
            std::cout << "Contact added!" << std::endl;
        }
        else if (command == "SEARCH") {
            if (phoneBook.getCount() == 0) {
                std::cout << "No contacts yet." << std::endl;
                continue;
            }

            phoneBook.displayContacts();

            std::cout << "Enter index: ";
            int index;
            if (!(std::cin >> index)) {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Invalid input!" << std::endl;
                continue;
            }
            std::cin.ignore();

            phoneBook.displayContactDetails(index);
        }
        else if (command == "EXIT") {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        else {
            std::cout << "Unknown command." << std::endl;
        }
    }

    return 0;
}