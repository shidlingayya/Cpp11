#include <iostream>
#include <vector>

class deleteExample
{
public:
	deleteExample() = delete;
	deleteExample(int xx, int yy, int zz):_x(xx), _y(yy), _z(zz){}
	void display()
	{
		std::cout << "_x: " << _x << " _y: " << _y << " _z:" << _z << std::endl;
	}
	deleteExample(const deleteExample& obj) = delete;
	deleteExample(deleteExample&& obj) = delete;
private:
	int _x;
	int _y;
	int _z;
};

int main()
{
	//deleteExample(); //!ERROR
	deleteExample obj(10, 20, 30);
	obj.display();
	//deleteExample obj1(obj); //!ERROR
	//obj1.display();
	// deleteExample obj1 = std::move(obj); //ERROR
}