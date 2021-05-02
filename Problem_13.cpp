// Problem_13.cpp : 

#include <iostream>

int main()
{
    int a;
    int b;
    std::cout << "Dear user please ener any digit: a";
    std::cin >> a;
    std::cout << "Dear user please eter any digit: b";
    std::cin >> b;
    if (a >=b) {
        std::cout << "a is greater than b" << a <<std::endl;
    }
    else {
        std::cout << "b is greater than a" << b << std::endl;
    }
    return 0;
}

