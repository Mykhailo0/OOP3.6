#pragma once
#include"B1.h"
#include"B2.h"
#include"B3.h"
class D1 : public B1, public B2, private B3
{
	int d1;

public:
	D1();
	D1(int x, int y, int z, int i);
	void show_D1();
};