#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int var1{ 10 };
	int var2{ 20 };
	auto arthimatic = [var1, &var2]() {
		std::cout << "(var1 + var2): " << (var1 + var2) << std::endl;
		std::cout << "(var1 - var2): " << (var1 - var2) << std::endl;
		std::cout << "(var1 * var2): " << (var1 * var2) << std::endl;
		std::cout << "(var1 % var2): " << (var1 % var2) << std::endl;
		std::cout << "(var1 / var2): " << (static_cast<float>(var1) / var2) << std::endl;
		};
	arthimatic();
}