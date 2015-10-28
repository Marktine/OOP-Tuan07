#pragma once
#include <fstream>
using namespace std;

class CPhanSo
{
private:
	int _tu;
	int _mau;
public:
	CPhanSo();
	CPhanSo(const CPhanSo &p);
	CPhanSo(int Tu, int Mau);
	int getTu();
	int getMau();
	void DocFile(fstream &f);
	void XuatFile(fstream &f);
	CPhanSo& operator + (CPhanSo p1);

	~CPhanSo();
};

