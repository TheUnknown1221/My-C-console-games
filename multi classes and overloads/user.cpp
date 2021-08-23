#include <string>
#include <ostream>
#include "user.h"


    std::string User::getLastName() {
        return lastName;
    }

    void User::setLastName(std::string lastName) {
        this->lastName = lastName;
    }

    int User::getAge() {
        return age;
    }

    void User::setAge(int age) {
        this->age = age;
    }
    
    User::User() {
        userCount++;
    }

    User::~User() {
        userCount--;
    }

    int User::userCount = 0;

std::ostream& operator << (std::ostream& output, User user)
{
    output << "\nFirst name: " << user.firstName << "\nLast name: " << user.getLastName() << "\nAge: " << user.getAge() << std::endl;
    return output;
}

