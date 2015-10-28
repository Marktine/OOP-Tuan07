#include "VanPhong.h"
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	CVanPhong c;
	fstream f, f1;
	f.open("Input.inp", ios_base::in);
	f1.open("Output.out", ios_base::out);
	c.DocFile(f);
	c.XuatFile(f1);
	return 0;
}