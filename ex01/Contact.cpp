#include "Contact.hpp"

Contact::Contact() : firstName(""), lastName(""), nickName(""),
                     phoneNumber(""), darkestSecret("") {}


void Contact::setFirstName(const std::string& str) {
    this->firstName = str;
}

void Contact::setLastName(const std::string& str) {
    this->lastName = str;
}

void Contact::setNickName(const std::string& str) {
    this->nickName = str;
}

void Contact::setPhoneNumber(const std::string& str) {
    this->phoneNumber = str;
}

void Contact::setDarkestSecret( const std::string& str) {
    this->darkestSecret = str;
}

std::string Contact::getFirstName() const {
    return this->firstName;
}

std::string Contact::getLastName() const {
    return this->lastName;
}

std::string Contact::getNickName() const {
    return this->nickName;
}

std::string Contact::getPhoneNumber() const {
    return this->phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return this->darkestSecret;
}

bool Contact::isEmpty() const {
    return (firstName.empty() && lastName.empty() &&
            nickName.empty() && phoneNumber.empty() && darkestSecret.empty());
}