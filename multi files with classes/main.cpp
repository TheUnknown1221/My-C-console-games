#include <vector>
#include <string>
#include <iostream>
#include "user.h"

int main() {
    User me("bob", "jackson", 27);
    std::cout << "User count: " << me.getUserCount() << std::endl;
    std::cout << me << std::endl;
    std::cin >> me;
    std::cout << me << std::endl;
}