#pragma once
#include "CShape.h"
class CEllipse :
	public CShape
{
protected:
	const float pi = 3.14;
	float mF1, mF2;
	double P, S;

public:
	CEllipse(float a, float b) :mF1(a), mF2(b), P(0), S(0) {};
	~CEllipse();

	double CalcArea();
	double CalcPerimeter();

	int ID() { return 3; };
	void Show();
};

