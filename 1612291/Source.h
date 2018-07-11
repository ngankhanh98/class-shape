#pragma once
#include "stdafx.h"
#include "Source.h"
#include"CCircle.h"
#include"CSquare.h"

void StoreShapes(CShape **p, int &n);		// lưu trữ mảng n đối tượng CShape

void ShowShapes(CShape ** p, int n);		// in ra mảng n đối tượng CShape

void FindMax(CShape**p, int n);		// tìm  hình có diện tích lớn nhất trong danh sách các hình cho trước. Nếu diện tích
									// bằng nhau thì ưu tiên hình có chu vi lớn hơn

void Sort(CShape**p, int n);		// sắp xếp mảng các hình theo thứ tự tăng dân

int Count(CShape**p, int n, int &ID);	// đếm số lượng hình thuộc một lại cho trước (cung cấp bởi ID)

double CalcAreaType(CShape**p, int n, int &ID); // tổng diện tích một loại hình cho trước


