#ifndef TEACHER_h
#define TEACHER_h

#include "user.h"

class Teacher : public User 
{
    public:
        std::vector<std::string> classesTeaching;
        void outputClasses();
        void pushbackTeaching(Teacher user);
};

std::ostream& operator << (std::ostream& output, Teacher teacher);

#endif
