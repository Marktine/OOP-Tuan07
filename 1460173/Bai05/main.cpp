#include "Name.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	CName n;
	fstream f, f1;
	f.open("Input.inp", ios_base::in);
	f1.open("Output.out", ios_base::out);
	n.DocFile(f);
	n.XuatFile(f1);
	return 0;
}