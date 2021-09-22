// Lab_02.cpp
// < Шарафан Максим >
// Лабораторна робота No 2.
// Лінійні програми.
// Варіант 19

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "x = "; cin >> x;

	z1 = pow(((1 + x + x * x) / (2*x + x * x) + 2 - (1 - x + x * x) / (2*x - x * x)), (-1)) * (5 - 2 * x * x);
	z2 = (4 - x * x) / 2;

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}