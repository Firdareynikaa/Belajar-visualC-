// IF 01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
int N;

void main()
{
	cout << "\n Nilai Pemrograman Dasar : "; cin >> N;

	if (N >= 75) cout << "\n Anda LULUS..!!";
	else cout << "\n Anda Remidi..!!";
	cout << "\n\n";
	system("pause");
}

