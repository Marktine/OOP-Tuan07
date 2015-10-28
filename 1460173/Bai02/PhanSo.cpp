#include "PhanSo.h"
#include <fstream>
#include <iostream>
using namespace std;


CPhanSo::CPhanSo()
{
	_tu = 0;
	_mau = 1;
}

CPhanSo::CPhanSo(const CPhanSo &p)
{
	_tu = p._tu;
	_mau = p._mau;
}

CPhanSo::CPhanSo(int Tu, int Mau)
{
	_tu = Tu;
	if (Mau == 0) _mau = 1;
	_mau = Mau;
}

int CPhanSo::getTu()
{
	return _tu;
}

int CPhanSo::getMau()
{
	return _mau;
}

void CPhanSo::DocFile(fstream &f)
{
	f >> this->_tu;
	f >> this->_mau;
}

CPhanSo& CPhanSo::operator+ (CPhanSo p1)
{
	CPhanSo pKQ;
	if (this->_mau == p1._mau)
	{
		pKQ._tu = this->_tu + p1._tu;
		pKQ._mau = this->_mau;
	}
	else
	{
		pKQ._tu = this->_tu * p1._mau + p1._tu * this->_mau;
		pKQ._mau = this->_mau * p1._mau;
	}
	return pKQ;
}

void CPhanSo::XuatFile(fstream &f)
{
	f << this->_tu << " " << this->_mau;
	f.close();
}

CPhanSo::~CPhanSo()
{
}
