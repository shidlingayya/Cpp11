#include <iostream>
#include <algorithm>
#include <array>

int main()
{
	std::array areas{ 100, 25, 121, 40, 50 };
	for (auto it = areas.begin(); it < areas.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
}
