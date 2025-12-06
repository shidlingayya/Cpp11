#include <iostream>
#include <algorithm>

class google
{
public:
	virtual void display()
	{
		std::cout << "Inside google class" << std::endl;
	}
};

class google_plus :public google
{
public:
	void display(int x) override
	{
		std::cout << "Inside google_plus" << std::endl;
	}
};

int main()
{
	return 0;
}