#include "D2.h"
D2::D2() :D1(), d2(0) {}
D2::D2(int x, int y, int z, int i, int j)
	:D1(x, y, z, i)
{
	d2 = j;
}
void D2::show_D2()
{
	cout << "class D2:" << endl;
	show_D1();
	cout << "show_D2()" << endl
		<< "D2::d2 = " << d2 << endl << endl;
}