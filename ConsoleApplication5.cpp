﻿#include "pch.h"
#include <iostream>
#include <windows.h>
#include <clocale>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x0, v0, t, xt, g = -9.8;
	cout << "Введите x0 v0 и t\n";
	cin >> x0 >> v0 >> t;
	xt = x0 + v0 * t + g * t * t / 2; 
	//Если я правильно понял, то a*t*t/2 лучше 1/2*a*t*t, т.к. проводится меньше операций
	cout << xt << endl;
	//Ограничение на отрицательные числа в условии задачи не требуется
	system("pause");
	return 0;
}


// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
