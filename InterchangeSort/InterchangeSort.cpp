// InterchangeSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
void InterchangeSort(int M[], int n);
int main()
{
	int M[50];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	NhapMang(M, n);
	cout << "\nMang sau khi nhap:\n";
	XuatMang(M, n);
	cout << "\nMang sau khi sap xep:\n";
	InterchangeSort(M, n);
	XuatMang(M, n);
	return 0;
}

void NhapMang(int M[], int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		M[i] = rand() % 100;
	}
}

void XuatMang(int M[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << M[i] << "\t";
	}
}

void InterchangeSort(int M[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//if (M[j] < M[i]) // tang dan
			if(M[j] >M[i]) // giam dan
			{
				int temp = M[i];
				M[i] = M[j];
				M[j] = temp;
			}
		}
	}
}
