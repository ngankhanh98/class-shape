#include "stdafx.h"
#include "Source.h"
#include"CCircle.h"
#include"CSquare.h"
using namespace std;


void ShowShapes(CShape **p, int n)
{
	for (int i = 0; i < n; i++)
	{
		p[i]->Show();
	}
}

void FindMax(CShape ** p, int n)
{
	CShape *max = p[0];

	for (int i = 0; i < n; i++)
	{
		p[i]->CalcArea();
		p[i]->CalcPerimeter();
		if (max->CalcArea() < p[i]->CalcArea())
			max = p[i];
		else if (max->CalcArea() == p[i]->CalcArea())
		{
			if (max->CalcPerimeter() < p[i]->CalcPerimeter())
				max = p[i];
		}
	}
	max->Show();
}

void Sort(CShape ** p, int n)
{
	CShape *temp = NULL;
	for (int i = 0; i < n; i++)
	{
		p[i]->CalcArea();
		p[i]->CalcPerimeter();
	}

	for(int i=0;i<n-1;i++)
		for (int j = i+1; j < n; j++)
		{
			if (p[i]->CalcArea() > p[j]->CalcArea())
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
			else if (p[i]->CalcArea() == p[j]->CalcArea())
			{
				if (p[i]->CalcPerimeter() < p[j]->CalcPerimeter())
				{
					temp = p[i];
					p[i] = p[j];
					p[j] = temp;
				}
			}
		}
}

int Count(CShape ** p, int n, int &ID)
{
	cout << "Dem so luong hinh:"<<endl;
	cout << "1.Hinh chu nhat" << endl;
	cout << "2.Hinh vuong" << endl;
	cout << "3.Hinh Ellipse" << endl;
	cout << "4.Hinh tron" << endl;
	
	do
	{		
		cin >> ID;
	} while (!(0< ID&&ID < 5));

	int count=0;
	for (int i = 0; i < n; i++)
	{
		if (p[i]->ID() == ID)
			count++;;
	}
	return count;
}

double CalcAreaType(CShape ** p, int n, int & ID)
{
	cout << "Tong dien tich hinh:" << endl;
	cout << "1.Hinh chu nhat" << endl;
	cout << "2.Hinh vuong" << endl;
	cout << "3.Hinh Ellipse" << endl;
	cout << "4.Hinh tron" << endl;

	double result = 0;
	do
	{
		cin >> ID;
	} while (!(0< ID&&ID < 5));

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (p[i]->ID() == ID)
			result += p[i]->CalcArea();
	}
	return result;
}

void StoreShapes(CShape ** p, int & n)
{
	int key;
	float a, b;
	for (int i = 0; i < n; i++)
	{
		do {
			cout << "Ban chon"<<endl;
			cout << "1.Hinh chu nhat" << endl;
			cout << "2.Hinh vuong" << endl;
			cout << "3.Hinh Ellipse" << endl;
			cout << "4.Hinh tron" << endl;
			cin >> key;
		} while (!(0 < key&&key < 5));
		
		switch (key)
		{
		case 1:
			cout << "Hinh chu nhat, nhap kich thuoc: ";
			cin >> a >> b;
			p[i] = new CRectangle(a, b);
			break;
		case 2:
			cout << "Hinh vuon, nhap kich thuoc:  ";
			cin >> a;
			p[i] = new CSquare(a);
			break;
		case 3:
			cout << "Hinh ellipse, nhap kich thuoc:  ";
			cin >> a >> b;
			p[i] = new CEllipse(a, b);
			break;
		case 4:
			cout << "Hinh tron, nhap kich thuoc:  ";
			cin >> a;
			p[i] = new CCircle(a);
			break;
		}
		if (i == n - 1) break;
	}
}
