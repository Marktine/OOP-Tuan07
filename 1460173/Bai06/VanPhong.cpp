#include "VanPhong.h"
#include <string>
#include <fstream>
using namespace std;

CVanPhong::CVanPhong()
{
	_Phong.push_back("No Room");
	_Name.push_back("No Name");
}

void CVanPhong::DocFile(fstream &f)
{
	while (!f.eof())
	{
		string Name;
		string Room;
		f >> Room;
		_Phong.push_back(Room);
		getline(f, Name);
		fflush(stdin);
		_Name.push_back(Name);
	}
}

string CVanPhong::maxCount()
{
	string element = "No element";
	int count = 0;
	for (int j = 0; j < this->_Phong.size(); j++)
	{
		string tempElement = this->_Phong.at(j);
		int tempCount = 0;
		for (int i = 0; i < this->_Phong.size(); i++)
		{
			if (this->_Phong.at(i) == tempElement)
				tempCount++;
			if (tempCount > count)
			{
				element = tempElement;
				count = tempCount;
			}
		}
	}
	return element;
}

void CVanPhong::XuatFile(fstream &f)
{
	f << this->maxCount();
}

CVanPhong::~CVanPhong()
{
}

