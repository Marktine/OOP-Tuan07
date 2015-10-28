#include "PhanSo.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	CPhanSo p1, p2;
	fstream f, f1;
	f.open("Input.txt", ios_base::in);
	f1.open("Output.txt", ios_base::out);
	p1.DocFile(f, p2);
	p1.Add(p2).XuatFile(f1);
	return 0;
}