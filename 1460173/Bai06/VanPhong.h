#pragma once
#include <string>
#include <vector>
using namespace std;
class CVanPhong
{
private:
	vector<string> _Phong;
	vector<string> _Name;
public:
	CVanPhong();
	void DocFile(fstream &f);
	string maxCount();
	void XuatFile(fstream &f);
	~CVanPhong();
};

