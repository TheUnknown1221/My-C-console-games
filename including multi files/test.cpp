#include <iostream>
// include header file
#include "funcs.h"

int main() {
    int a, b;
    a = 5;
    b = 15;

    std::cout << dosomething(a) << std::endl;
    std::cout << dosomething(a, b) << std::endl;
}