
#include "PhanSo.h"
#include <fstream>
#include <iostream>
using namespace std;

CPhanSo::CPhanSo()
{
	_tu = 0;
	_mau = 1;
}

CPhanSo::CPhanSo(const CPhanSo & p)
{
	_tu = p._tu;
	if (p._mau == 0) _mau = 1;
	_mau = p._mau;
}

CPhanSo::CPhanSo(int Tu, int Mau)
{
	_tu = Tu;
	if (Mau == 0) _mau = 1;
	_mau = Mau;
}

void CPhanSo::DocFile(fstream &f, CPhanSo &p1)
{
	f >> this->_tu;
	f >> this->_mau;
	f >> p1._tu;
	f >> p1._mau;
	f.close();
}

int CPhanSo::getTu()
{
	return this->_tu;
}

int CPhanSo::getMau()
{
	return this->_mau;
}

void CPhanSo::XuatFile(fstream &f)
{
	f << this->getTu() << " " << this->getMau();
	f.close();
}


CPhanSo CPhanSo::Add(CPhanSo p1)
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

CPhanSo::~CPhanSo()
{
}
