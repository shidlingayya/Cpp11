#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> myVect{ 1, 2, 3, 4, 5, 6, 80 };
	auto get_greater_than_5 = std::count_if(myVect.begin(), myVect.end(), [](int x) { return x > 5; });
	std::cout << " get_greater_than_5: " << get_greater_than_5 << std::endl;
}