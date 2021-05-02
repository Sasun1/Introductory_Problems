// Problem_15.cpp : 

#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Second number: ";
    std::cin >> b;
    std::cout << "third number: ";
    std::cin >> c;
    if (a >= b && a >= c) {
        std::cout << "bigest number is: " << a;
    }
    else if (b >= a && b >= c) {
        std::cout << "bigest number is: " << b;
    }
    else {
        std::cout << "bigest number is: " <<c;
    }
    return 0;
}


