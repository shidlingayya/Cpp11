#include <iostream>
#include <vector>

int main()
{
	int var1{ 100 };
	float var2{ 32.32f };
	double var3{ 32.32 };
	std::string str{ "Hello world" };
	int arr[] {1, 2, 3, 4, 5};
	std::vector<int> myVect{ 10, 20, 30, 40, 50 };
	int* ptr = new int[3] {1, 2, 3};

	std::cout << "var1: " << var1 << std::endl;
	std::cout << "var2: " << var2 << std::endl;
	std::cout << "var3: " << var3 << std::endl;
	std::cout << "str: " << str << std::endl;
	for (auto x : arr)
	{
		std::cout << x << " ";
	}
	std::cout << "\n";
	for (auto x : myVect)
	{
		std::cout << x << " ";
	}
	std::cout << "\n";
	for (auto i = 0; i < 3; ++i)
	{
		std::cout << *ptr++ << " ";
	}
	std::cout << std::endl;
	return 0;
}