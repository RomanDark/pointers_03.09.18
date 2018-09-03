// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

//37
template<typename T>

void rev(T *a, T size) {
	int *p1, *p2;
	p2 = a + size - 1;

	for (p1 = a; p1 < a + size / 2; p1++, p2--)
	{
		swap(*p1, *p2);
	}
}

//38
void search(int *a, int size) {

	int x;
	cout << "write number for search: ";
	cin >> x;
	int z = 0;

	int *p1, *p2;
	p2 = a + size - 1;

	for (p1 = a; p1 < a + size / 2; p1++, p2--)
	{
		if (*p1 == x || *p2 == x) {
			z = 1;
			break;
		}
	}

	(z = 1) ? cout << "true\n" << endl : cout << "false" << endl;
}

//39
void sum(int *a, int size) {

	int sum1 = 0, sum2 = 0;
	int z = 0;

	int *p1, *p2;
	p2 = a + size - 1;

	for (p1 = a; p1 <= p2; p1++, p2--)
	{
		sum1 += *p1;
		if (p2 != p1) sum2 += *p2;
	}
	cout << "sum = " << sum1 + sum2 << endl;
}

//40
void sumC(int *a, int size) {

	int sum1 = 0, sum2 = 0;
	int z = 0;

	int *p1, *p2;
	p2 = a + size - 1;

	for (p1 = a; p1 <= p2; p1++, p2--)
	{
		if (*p1%2 == 0)	sum1 += *p1;

		if (p2 != p1 && *p2%2 == 0) sum2 += *p2;
	}
	cout << "sum chetnyh = " << sum1 + sum2 << endl;
}

//41
void sumN(int *a, int size) {

	int sum1 = 0, sum2 = 0;
	int z = 0;

	int *p1, *p2;
	p2 = a + size - 1;

	for (p1 = a; p1 <= p2; p1++, p2--)
	{
		if ((p1-a) % 2 == 0)	sum1 += *p1;

		if (p2 != p1 && (p2-a) % 2 == 0) sum2 += *p2;
	}
	cout << "sum chetnyh nomerov = " << sum1 + sum2 << endl;
}

#pragma region 44.



void funcX(int *a, int size1, int *b, int size2) {
	int c = 0;
	int *ar;

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (a[i] == b[j]) {
				c++;
				a[i] = 0;
				b[i] = 0;
			}
		}
	}
	cout << c << endl;

	int z = size1 + size2 - c;
	cout << z << endl;

	ar = new int[z];

	//for (int i = 0, j = 0; i < z; i++)
	//{
	//
	//}
	//int *p;

	//cout << endl;

	//for (p = ar; p < ar + z; p++)
	//{
	//	cout << *p << " ";
	//}
	//cout << endl;

	delete[] ar;
}


void funcA(int *a, int size) {
	int *p;
	for (p = a; p < a+size; p++)
	{
		*p = rand() % 20 + 1;
		cout <<setw(5)<< *p;
	}
	cout << endl;
}

#pragma endregion

int main()
{
	//44.
	/*srand(time(NULL));

	int *a, *b;
	int size1,size2;

	cin >> size1 >> size2;

	a = new int[size1];
	funcA(a, size1);

	b = new int[size2];
	funcA(b, size2);

	funcX(a, size1, b, size2);

	
	
	delete[]a;
	delete[]b;*/

	//const int size1 = 7;
	//const int size2 = 7;
	//int a[size1] = { 1,2,3,4,5,6,7 };

	//int b[size2] = { 1,8,3,9,4,10,5 };




	//rev(a, size);

	/*for (int i = 0; i < size; i++)
	{
		cout << setw(5) << a[i];
	}
	cout << endl;

	search(a, size);
	sum(a, size);
	sumC(a, size);
	sumN(a, size);*/




#pragma region MyRegion


	/*int **a;
	int n, m;

	cin >> n >> m;

	a = new int *[n];

	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % 9 + 1;
			cout << setw(5) << a[i][j];
		}
		cout << endl;
	}

	for (int j = 0; j < m; j++)
	{
		delete[] a[j];
	}

	for (int i = 0; i < n; i++)
	{
		delete[] a;
	}*/

#pragma endregion

	return 0;
}

