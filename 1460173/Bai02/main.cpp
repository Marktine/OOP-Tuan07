#include "PhanSo.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	CPhanSo *p;
	CPhanSo Sum;
	int n;
	fstream f, f1;
	f.open("Input.txt", ios_base::in);
	f1.open("Output.txt", ios_base::out);
	f >> n;
	p = new CPhanSo[n];
	for (int i = 0; i < n; i++)
	{
		p[i].DocFile(f);
	}
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + p[i];
	}
	Sum.XuatFile(f1);
	return 0;
}