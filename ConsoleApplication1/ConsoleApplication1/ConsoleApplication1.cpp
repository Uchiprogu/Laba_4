// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
using namespace std;


int Alg(int a, int b, int & x, int & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	int x1, y1;
	int d = Alg(b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}
int main(int argc, char *argv[]) {
	int x, y;
	int a = 2347293471263482;
	int b = 82487298478924;
	Alg(a, b, x, y);
	cout << "X = " << x << endl;
	cout << "Y = " << y << endl;
	return 0;
}