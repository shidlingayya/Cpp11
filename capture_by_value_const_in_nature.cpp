#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> myList{ 10, 20, 30, 40, 50 };
	int argument = 0;
	std::cout << "Get value of argument: ";
	std::cin >> argument;
	auto found = std::find_if(myList.begin(), myList.end(), [argument](int x) {argument = 10; return x == argument; });
	if (found != myList.end())
	{
		std::cout << "Element found in list: " << std::endl;
	}
	else
	{
		std::cout << "Element not found in list " << std::endl;
	}
}