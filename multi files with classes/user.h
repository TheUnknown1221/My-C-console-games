#ifndef USER_H
#define USER_H

class User
{
    std::string lastName;
    static int userCount;

    public:
        std::string firstName;
        int age;

        static int getUserCount();

    User(std::string firstName, std::string lastName, int age);

    ~User();
    friend std::istream& operator >> (std::istream& input, User &user);
    friend std::ostream& operator << (std::ostream& output, User user);
};

#endif