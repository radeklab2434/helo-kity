#ifndef CLASS_H
#define CLASS_H
#include <string>

class MyClass
{
public:
	MyClass(int a, int b);
	void Print(std::string x);
	~MyClass();
	int regVar;
	const int constVar;
};

#endif
