#include <iostream>
#include <algorithm>
class ArrayWrapper
{
public:
	ArrayWrapper(int size) :_p(new int[size]), _size(size) {}
	ArrayWrapper(ArrayWrapper&& obj) :_p(obj._p), _size(obj._size) {}

private:
	int* _p;
	int _size;
};

int main()
{
	ArrayWrapper obj(10);
	ArrayWrapper obj1(std::move(obj));
}