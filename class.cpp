#include <iostream>
#include <string>
#include "class.h"

MyClass::MyClass(int a, int b):regVar(a), constVar(b)
{
	std::cout << a << b << std::endl << "Witaj tu Konstruktor" << std::endl;
}

void MyClass::Print(std::string x)
{
	std::cout << x << std::endl;
}

MyClass::~MyClass()
{
	std::cout << "Destruktor" << std::endl;
}
