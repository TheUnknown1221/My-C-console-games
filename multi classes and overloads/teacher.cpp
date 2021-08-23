#include <iostream>
#include <vector>
#include <string>
#include "teacher.h"

void Teacher::output() {
    std::cout << "nothing...\n";
    }

std::ostream& operator << (std::ostream& output, Teacher teacher)
{
    output << "\nFirst name: " << teacher.firstName << "\nLast name: " << teacher.getLastName() << "\nAge: " << teacher.getAge() << std::endl;
    return output;
}