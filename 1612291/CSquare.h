#pragma once
#include "CRectangle.h"
class CSquare :
	public CRectangle
{
	
public:
	CSquare(float a) :CRectangle(a, a) {};
	~CSquare();

	int ID() { return 2; };
	void Show();
};

