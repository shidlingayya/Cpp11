#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

class Google
{
public:
	virtual void display()
	{
		std::cout << "Welcome to Google: " << std::endl;
	}
};

class GooglePlus :public Google
{
public:
	void display() final
	{
		std::cout << "Inside GooglePlus" << std::endl;
	}
};

class Facebook :public GooglePlus
{
public:
	void display() final
	{
		std::cout << "Facebook" << std::endl;
	}
};

int main()
{
	return 0;
}