// 1612291.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"CSquare.h"
#include"CCircle.h"
#include"Source.h"
#include "1612291.h"
using namespace std;

int main()
{
	
	int n;
	cout << "So luong hinh:  ";
	cin >> n;

	CShape **pShape;
	pShape = new CShape*[n];

	StoreShapes(pShape, n);
	cout << "=============================================" << endl;
	cout << "Hinh co dien tich lon nhat: "<<endl;
	FindMax(pShape, n);

	cout << "=============================================" << endl;
	cout << "Sap xep cac hinh theo dien tich tang dan: " << endl;
	Sort(pShape, n);
	ShowShapes(pShape, n);
	
	cout << "=============================================" << endl;
	int k;
	cout << "So luong hinh: " << Count(pShape, n, k) << endl;;

	cout << "=============================================" << endl;
	cout << "S = " << CalcAreaType(pShape, n, k)<<endl;

    return 0;
}

