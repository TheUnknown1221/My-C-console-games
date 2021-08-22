#include <string>
#include <vector>
#include <iostream>
#include "user.h"


    int User::getUserCount() {
        return userCount;
    }

    User::User(std::string firstName, std::string lastName, int age) 
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
        userCount++;
    }

    User::~User() 
    {
        userCount--;
    }
    std::istream& operator >> (std::istream& input, User &user);
    std::ostream& operator << (std::ostream& output, User user);


int User::userCount = 0;

std::ostream& operator << (std::ostream& output, User user)
{
    output << "First name: " << user.firstName << "\nLast name: " << user.lastName << "\nAge: " << user.age;
    return output;
}

std::istream& operator >> (std::istream& input, User &user) 
{
    input >> user.firstName >> user.lastName;
    return input;
}