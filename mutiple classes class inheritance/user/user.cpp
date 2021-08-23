#include <string>
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
