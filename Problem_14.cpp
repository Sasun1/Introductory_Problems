// Problem_14.cpp : 

#include <iostream>

int main()
{
	int a;
	int b;
	std::cout << "First number: ";
	std::cin >> a;
	std::cout << "Second number: ";
	std::cin >> b;
	if (a <= b) {
		std::cout << a << std::endl;
	}
	else {
		std::cout << b << std::endl;
	}
	return 0;
}


