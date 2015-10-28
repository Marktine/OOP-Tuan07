#include "IntArray.h"
#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main()
{
	CIntArray a;
	fstream f, f1;
	f.open("Input.inp", ios_base::in);
	f1.open("Output.out", ios_base::out);
	a.XuatFile(f, f1);
	return 0;
}