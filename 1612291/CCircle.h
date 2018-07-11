#pragma once
#include "CEllipse.h"
class CCircle :
	public CEllipse
{
public:

	CCircle(float a) :CEllipse(a, a) {};
	~CCircle();

	double CalcPerimeter();
	int ID() { return 4; };
	void Show();
};

