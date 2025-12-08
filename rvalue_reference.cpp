#include <iostream>
#include <algorithm>
#include <vector>

void printValue(int& value)
{
	std::cout << "lvalue->value: " << value << std::endl;
}

void printValue(int&& value)
{
	std::cout << "rvalue->value: " << value << std::endl;
}

int getValue()
{
	int temp = 99;
	return temp;
}

int main()
{
	int var = 10;
	printValue(10);
	printValue(getValue());
}