#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

int main()
{
	int arr[]{ 1, 2, 3, 4, 5 };
	int b{ 100 };
	float c{ 432.43f };
	char d{ 'A' };
	std::vector my_vect{ 1, 2, 3, 4, 5 };

	//print arr
	for (auto x : arr)
	{
		std::cout << x << " ";
	}
	std::cout << std::endl;

	//print b
	std::cout << b << std::endl;

	//print c
	std::cout << c << std::endl;

	//print d
	std::cout << d << std::endl;

	//print my_vect
	for (auto x : my_vect)
	{
		std::cout << x << " ";
	}
	std::cout << std::endl;
}