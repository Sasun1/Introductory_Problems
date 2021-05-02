// Problem_17.cpp : 

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
    if (a == b || b == c) {
        if (a >= b && a >= c) {
            std::cout << "a is greater than b,c" << a << std::endl;
        }
        else if (b >= a && b >= c) {
            std::cout << "b is greater than a,c" << b << std::endl;
        }
        else {
            std::cout << "c is greater than b,a" << c << std::endl;
        }
    }
    return 0;

}

