#include "IntArray.h"
#include <fstream>
#include <iostream>
using namespace std;

CIntArray::CIntArray()
{
	_m_Array.resize(0);
}

bool CIntArray::IsPrime(long long a)
{
	bool isPrime = false;
	if(a < 0)
	{
		a = -a;
	}
	switch (a)
	{
		{
	case 1:
		isPrime = false; break;
		}
	case 0: case 2: case 3:
		isPrime = true; break;
	default:
	{
		double sqrt_a = sqrt(a);
		long long i = 3;
		if (a % 2 == 0)
		{
			isPrime = false; break;
		}
		isPrime = true;
		while (i <= sqrt_a)
		{
			if (a % i == 0)
			{
				isPrime = false;
				break;
			}
			i += 2;
		}
	}
	}
	return isPrime;
}

bool CIntArray::DocFile(fstream &f)
{
	while (!f.eof())
	{
		long long n;
		f >> n;
		this->_m_Array.push_back(n);
		if (this->IsPrime(n) == true)
		{
			return true;
		}
	}
	return false;
}

void CIntArray::XuatFile(fstream &f, fstream &f1)
{
		if (this->DocFile(f) == true)
		{
			f1 << "YES";
		}
		else
		{
			f1 << "NO";
		}
}

CIntArray::~CIntArray()
{
}
