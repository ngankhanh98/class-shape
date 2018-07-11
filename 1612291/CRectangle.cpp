#include "stdafx.h"
#include "CRectangle.h"
using namespace std;


CRectangle::~CRectangle()
{
}

double CRectangle::CalcArea()
{
	S = width*height;
	return this->S;
}

double CRectangle::CalcPerimeter()
{
	P = (width + height) * 2;
	return this->P;
}

void CRectangle::Show()
{
	cout << "Hinh chu nhat, (" << width << "x" << height << ")\t, P=" << P << "\t,S=" << S << endl;
}

