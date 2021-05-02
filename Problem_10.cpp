// Problem_10.cpp : 
//

#include <iostream>

int main()
{
	int a = 5;
	long b = 150;
	long long c = 1000;
	unsigned int d = 300;
	float e = 2.364f;
	double f = 10.6548;
	bool g = true;
	bool h = false;
	char i = 'k';
	std::cout << "int: " << a << " (" << sizeof(a) << " bytes)" << std::endl;
	std::cout << "long: " << b << " (" << sizeof(b) << " bytes)" << std::endl;
	std::cout << "long long: " << c << " (" << sizeof(c) << " bytes)" << std::endl;
	std::cout << "unsigned int: " << d << " (" << sizeof(d) << " bytes)" << std::endl;
	std::cout << "float: " << e << " (" << sizeof(e) << " bytes)" << std::endl;
	std::cout << "double: " << f << " (" << sizeof(f) << " bytes)" << std::endl;
	std::cout << "bool: " << g << " (" << sizeof(g) << " bytes)" << std::endl;
	std::cout << "bool: " << h << " (" << sizeof(h) << " bytes)" << std::endl;
	std::cout << "char: " << i << " (" << sizeof(i) << " bytes)" << std::endl;
	return 0;
}



