#include "D1.h"
D1::D1()
	:B1(0), B2(0), B3(0), d1(0)
{}
D1::D1(int x, int y, int z, int i)
	:B1(x), B2(y), B3(z)
{
	d1 = i;
}
void D1::show_D1()
{
	cout << "class D1:" << endl;
	show_B1();
	show_B2();
	show_B3();
	cout << "show_D1()" << endl
		<< "D1::d1 = " << d1 << endl << endl;
}