#ifndef USER_H
#define USER_H

class User
{
    static int userCount;
    std::string lastName;
    int age;
    
    public:
        std::string firstName;

        std::string getLastName();
        void setLastName(std::string lastName);

        int getAge();
        void setAge(int age);
    
    User();
    ~User();
};

std::ostream& operator << (std::ostream& output, User user);

#endif