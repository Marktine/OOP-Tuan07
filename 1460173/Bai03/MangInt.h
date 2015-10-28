#pragma once
#include <fstream>
#include <vector>
using namespace std;
class CMangInt
{
private:
	std::vector<int> _arr;
public:
	CMangInt();
	CMangInt(const CMangInt &a);
	CMangInt( std::vector<int> Arr);
	void DocFile(fstream &f);
	int SoLon2();
	~CMangInt();
};

