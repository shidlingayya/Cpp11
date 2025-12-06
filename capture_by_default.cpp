#include <iostream>
#include <algorithm>
#include <array>

int main()
{
	std::array areas{ 100, 25, 121, 40, 50 };
	int height{ 10 };
	int width{ 10 };
	std::cout << "Enter height and width" << std::endl;
	std::cin >> height >> width;

	auto found = std::find_if(areas.begin(), areas.end(), [=](int knownarea)
		{
			return(width == height);
		});

	if (found == areas.end())
	{
		std::cout << "Unknown area: " << std::endl;
	}
	else
	{
		std::cout << "Area found" << std::endl;
	}
}
