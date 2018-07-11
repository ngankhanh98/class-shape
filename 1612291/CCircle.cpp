#include "stdafx.h"
#include "CCircle.h"
using namespace std;

CCircle::~CCircle()
{
}

double CCircle::CalcPerimeter()
{
	P = 2 * pi*mF1;
	return this->P;
}

void CCircle::Show()
{
	cout << "Hinh tron, (R=" << mF1 << ")\t, P=" << P << "\t,S=" << S << endl;
}
