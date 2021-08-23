#include <vector>
#include <string>
#include <iostream>

#include "teacher.h"
#include "user.h"

int main() {
    User user;
    user.firstName = "bob";
    user.setLastName("michel");
    user.setAge(18);
    
    std::cout << user;

    Teacher teacher;
    std::cout << teacher;


}