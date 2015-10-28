#include "Name.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

CName::CName()
{
	_Name.resize(0);
}

void CName::DocFile(fstream &f)
{
	while (!f.eof())
	{
		string temp;
		f >> temp;
		_Name.push_back(temp);
	}
}

string CName::maxLength()
{
	string max = _Name.at(0);
	for (int i = 0; i < _Name.size(); i++)
	{
		if (_Name.at(i).length() > max.length())
		{
			max = _Name.at(i);
		}
	}
	return max;
}

void CName::XuatFile(fstream &f)
{
	f << this->maxLength() << " " << this->maxLength().length();
}

CName::~CName()
{
}
