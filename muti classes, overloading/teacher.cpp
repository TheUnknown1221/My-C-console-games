#include <iostream>
#include <vector>
#include <string>
#include "teacher.h"

void Teacher::outputClasses() {
    if (classesTeaching.size() != 0) {
        for (int i = 0; i < classesTeaching.size(); i++) {
            std::cout << "\nname: " << classesTeaching[i] << "\nis teaching";
        }
    } else std::cout << "\nno-one is teaching..\n";
}

void Teacher::pushbackTeaching(Teacher user)
{
    if (user.firstName == "") {
        std::cout << "\nplease make sure all teacher details are filled in\n";
        exit;
    }
    else {
        for (std::string element : classesTeaching) {
            if (element == user.firstName) {
                std::cout << "teacher: [" << element;
                std::cout << "] is already teahcing";
                exit;
            }
        } 
        classesTeaching.push_back(user.firstName);
    }
    
}

std::ostream& operator << (std::ostream& output, Teacher teacher)
{
    output << "\nFirst name: " << teacher.firstName << "\nLast name: " << teacher.getLastName() << "\nAge: " << teacher.getAge() << std::endl;
    return output;
}