//Source.cpp
#include <iostream>
#include "Windows.h"
#include "date.h"
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	date g;
	g.Read();
	g.Display();
	g.presen();
	g.represen();
	return 0;
}
