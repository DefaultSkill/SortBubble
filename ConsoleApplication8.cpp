

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");

	int const N = 10;
	int A[N];
	for (int i = 0; i < N; i++)
	{
		cout << "������� �������� " << i << " �������� ������� : ";
		while (!(cin >> A[i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "������� �������� " << i << " �������� ������� : ";
		}
	}

	cout << "\t\t ***���������� Bubble\a***" << endl;
	for (int i = N - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (A[j]>A[j + 1])
			{
				double tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++){
		cout << "A[" << i << "]=" << A[i] << endl;
	}
	_getch();
	return 0;
}
