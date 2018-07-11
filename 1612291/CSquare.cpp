#include "stdafx.h"
#include "CSquare.h"
using namespace std;



CSquare::~CSquare()
{
}

void CSquare::Show()
{
	cout << "Hinh vuong, (" << width << "x" << width << ")\t, P=" << P << "\t,S=" << S << endl;
}
