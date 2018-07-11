#pragma once
#include<iostream>
class CShape
{
	CShape *mpShape;
public:
	CShape() {};
	~CShape()
	{
		if (mpShape != NULL)
			delete[]mpShape;
	};


	virtual double CalcArea() = 0;
	virtual double CalcPerimeter() = 0;
	virtual int ID() = 0;
	virtual void Show() = 0;
};

