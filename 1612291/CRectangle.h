#pragma once
#include "CShape.h"
class CRectangle :
	public CShape
{

protected:
	float width, height;
	double S, P;

public:

	CRectangle(float a, float b) :width(a), height(b), S(0), P(0) {};
	~CRectangle();

	double CalcArea();
	double CalcPerimeter();
	int ID() { return 1; };
	void Show();
};

