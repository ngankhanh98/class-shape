#include "stdafx.h"
#include "CEllipse.h"
using namespace std;



CEllipse::~CEllipse()
{
}

double CEllipse::CalcArea()
{
	S = pi*mF1*mF2;
	return this->S;
}

double CEllipse::CalcPerimeter()
{
	P = pi*(3 * (mF1+ mF2) - sqrt((3 * mF1+ mF2)*(mF1+ 3 * mF2)));
	return this->P;
}

void CEllipse::Show()
{
	cout << "Hinh ellipse, (" << mF1 << "," << mF2 << ")\t, P=" << P << "\t,S=" << S << endl;

}
