#pragma once
#include <fstream>
#include <vector>
using namespace std;
class CIntArray
{
private:
	vector<long long> _m_Array;
public:
	CIntArray();
	bool DocFile(fstream &f);
	bool IsPrime(long long n);
	void XuatFile(fstream &f, fstream &f1);
	~CIntArray();
};

