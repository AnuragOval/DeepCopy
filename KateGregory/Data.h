#pragma once
#include<iostream>
using namespace std;
class Data
{
private:
	int num = 0;
	int* ptr = nullptr;
public:
	Data();
	~Data();
	Data(int);
	Data(int, int);
	void print();
	Data(const Data& ); // COpy ctor.
	Data& operator=(const Data&);
};


