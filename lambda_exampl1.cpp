#include <iostream>

int main()
{
	auto getGreater = [](int x, int y) 
	{
		return (x > y)?x:y;
	};
	std::cout << "getGreater: " << getGreater(10, 20) << std::endl;
}