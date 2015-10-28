#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class CName
{
private:
	vector<string> _Name;
public:
	CName();
	void DocFile(fstream &f);
	string maxLength();
	void XuatFile(fstream &f);
	~CName();
};

