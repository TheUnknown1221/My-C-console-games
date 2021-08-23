#ifndef TEACHER_h
#define TEACHER_h

#include "../user/user.h"

class Teacher : public User 
{
    public:
        std::vector<std::string> classesTeaching;
        void output();
};

std::ostream& operator << (std::ostream& output, Teacher teacher);

#endif