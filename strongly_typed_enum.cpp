#include <iostream>
enum struct countries :int
{
	INDIA,
	USA,
	JAPAN,
	AUSTRALIA
};

enum class status :bool
{
	TRUE,
	FALSE
};

int main()
{
	countries country = countries::JAPAN;
	std::cout << "country value: " << static_cast<int>(country) << std::endl;

	status stat = status::TRUE;
	std::cout << "status value: " << static_cast<bool>(stat) << std::endl;
}