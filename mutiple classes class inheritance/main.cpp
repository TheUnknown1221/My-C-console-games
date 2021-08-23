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

    Teacher teacher;
    teacher.output();
    

}