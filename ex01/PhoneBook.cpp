#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : count(0), nextIndex(0) {}

void PhoneBook::addContact(const Contact& c) {
    contacts[nextIndex] = c;
    nextIndex = (nextIndex + 1) % 8;
    if (count < 8)
        count++;
}

static std::string formatField(const std::string& str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::displayContacts() const {
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    
    for (int i = 0; i < count; i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getLastName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getNickName())
                  <<std::endl;
     }
}

void PhoneBook::displayContactDetails(int index) const {
    if (index < 0 || index >= count) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    const Contact& c = contacts[index];
    std::cout << "First Name: " << c.getFirstName() << std::endl;
    std::cout << "Last Name: " << c.getLastName() << std::endl;
    std::cout << "Nickname: " << c.getNickName() << std::endl;
    std::cout << "Phone Number: " << c.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << c.getDarkestSecret() << std::endl;
}

int PhoneBook::getCount() const {
    return count;
}