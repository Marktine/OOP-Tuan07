#include <fstream>
#include "MangInt.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	CMangInt a;
	fstream f, f1;
	f.open("Input.txt", ios_base::in);
	f1.open("Output.txt", ios_base::out);
	a.DocFile(f);
	f1 << a.SoLon2();
	return 0;
}