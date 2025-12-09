#include"Data.h"
Data::Data()
{
	cout << "\n In ctor";
	num = -1;
	ptr = nullptr;
}

Data::~Data()
{
	std::cout << "\n  Inside Destructor";
	num = 0;
	delete ptr;
}

Data::Data(int a, int b)
{
	num = a;
	ptr = new int;
	*ptr = b;
}

Data::Data(int a)
{
	num = a;
	ptr = new int;
	ptr = nullptr;
}


void Data::print()
{
	cout << "\n Printing data" << num;
	if (ptr != nullptr)
		cout << "\n Printing value at " << *ptr;
	else
		cout << "\n Empty pointer found";
}

Data::Data(const Data& old)
{

	num = old.num;
	ptr = new int;
	*ptr = *(old.ptr);

}

Data& Data::operator=(const Data& old)
{
	if (this != &old)
	{
		num = old.num;
		delete ptr;
		ptr = new int(*old.ptr);
	}
	return *this;
}
