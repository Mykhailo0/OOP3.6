#include"B1.h"
#include"B2.h"
#include"B3.h"
#include"D1.h"
#include"D2.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	B1 o1(777);
	cout << "B1 o0(777);" << endl;
	cout << "sizeof(B1) = " << sizeof(B1) << endl;
	cout << endl << " B1: " << endl;
	o1.show_B1();

	B2 o2(111);
	cout << "B2 o2(111);" << endl;
	cout << "sizeof(B2) = " << sizeof(B2) << endl;
	cout << endl << " B2: " << endl;
	o2.show_B2();

	B3 o3(1000);
	cout << "B3 o3(1000);" << endl;
	cout << "sizeof(B3) = " << sizeof(B3) << endl;
	cout << endl << " B3: " << endl;
	o3.show_B3();

	D1 o4(100, 200, 300, 400);
	cout << "D1 o4(100, 200, 300, 400);" << endl;
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << " D1: " << endl;
	o4.show_D1();

	D2 o5(1, 2, 3, 4, 5);
	cout << "D2 o5(1, 2, 3, 4, 5);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << " D2: " << endl;
	o5.show_D2();
	return 0;
}