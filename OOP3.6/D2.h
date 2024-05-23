#pragma once
#include"B1.h"
#include"B2.h"
#include"B3.h"
#include"D1.h"

class D2 :public D1
{
	int d2;

public:
	D2();
	D2(int x, int y, int z, int i, int j);
	void show_D2();
};