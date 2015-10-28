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
	void DocFile(fstream &f, CPhanSo &p1);
	void XuatFile(fstream &f);
	int getTu();
	int getMau();
	CPhanSo Add(CPhanSo p1);
	~CPhanSo();
};

