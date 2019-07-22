// IF 00.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;

int N;
string K = "\n KOMPETEN ..!";

void main()
{
	cout << "\n Nilai Pemrograman Dasar : ";
	cin >> N;

	if (N < 75) K = "\n Remidi..!!";
	cout << "\n Anda " << K;
	cout << "\n\n "; system("pause");
}

