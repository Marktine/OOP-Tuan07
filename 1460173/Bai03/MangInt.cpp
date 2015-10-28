#include "MangInt.h"
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

CMangInt::CMangInt()
{
	_arr.resize(0);
}

CMangInt::CMangInt(const CMangInt &a)
{
	for (int i = 0; i < a._arr.size(); i++)
	{
		_arr.push_back(a._arr.at(i));
	}
}

CMangInt::CMangInt(vector<int> Arr)
{
	for (int i = 0; i < Arr.size(); i++)
	{
		_arr.push_back(Arr.at(i));
	}
}

void CMangInt::DocFile(fstream &f)
{
	while (!f.eof())
	{
		int n;
		f >> n;
		this->_arr.push_back(n);
	}
}

int CMangInt::SoLon2()
{
	int max1;
	int max2;
	if (this->_arr.at(1) > this->_arr.at(2))
	{
		max1 = this->_arr.at(1);
		max2 = this->_arr.at(2);
	}
	else
	{
		max1 = this->_arr.at(2);
		max2 = this->_arr.at(1);
	}
	for (int i = 3; i < this->_arr.size(); i++)
	{
		if (this->_arr.at(i) > max1)
		{
			max2 = max1;
			max1 = this->_arr.at(i);
		}
		else if (this->_arr.at(i) < max1 && this->_arr.at(i) > max2)
		{
			max2 = this->_arr.at(i);
		}
	}
	return max2;
}

CMangInt::~CMangInt()
{
}
