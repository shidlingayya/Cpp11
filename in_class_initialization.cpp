#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

class abcd
{
private:
	int a = 100;
	int b = 200;
	int c = 300;
public:
	float get_avg()
	{
		return((a + b + c) / 3.0);
	}
};

int main()
{
	std::cout << "get_avg(): " << abcd().get_avg() << std::endl;
}