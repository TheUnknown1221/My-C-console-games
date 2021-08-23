#include <vector>
#include <string>
#include <iostream>

#include "./teacher/teacher.h"
#include "./user/user.h"

int main() {
    User user;
    user.firstName = "bob";
    user.setLastName("michel");
    user.setAge(18);
    std::cout << user;

    Teacher teacher;
    std::cout << teacher;
    
    teacher.outputClasses();
    teacher.pushbackTeaching(teacher);

    teacher.firstName = "mike";
    teacher.setLastName("willson");
    teacher.setAge(37);
    
    teacher.pushbackTeaching(teacher);
    teacher.outputClasses();

}