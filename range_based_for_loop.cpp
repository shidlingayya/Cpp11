#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

int main()
{
	std::vector<int> v{ 0, 1, 2, 3, 4 };
	for (auto i : v)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";

	for (int n : {0, 1, 2, 3, 4, 5})
	{
		std::cout << n << " ";
	}
	std::cout << "\n";

	int arr[]{ 1, 2, 3, 4, 5 };
	for (auto n : arr)
	{
		std::cout << n << " ";
	}
	std::cout << "\n";

	std::string str{ "Hello" };
	for (auto c : str)
	{
		std::cout << c << " ";
	}
	std::cout << "\n";
}
