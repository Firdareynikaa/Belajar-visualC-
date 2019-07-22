// MAX ABC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
int A, B, C;

void main()
{
	cout << "\n";
	cout << " Nilai A = "; cin >> A;
	cout << " Nilai B = "; cin >> B;
	cout << " Nilai C = "; cin >> C;

	if (A > B) goto J3;
	if (B > C) goto J2;
J1: cout << "\n C TERBESAR";
	goto J5;
J2: cout << "\n B TERBESAR";
	goto J5;
J3: if (A > C) goto J4;
	goto J1;
J4: cout << "\n A TERBESAR";
J5: cout << "\n\n ";

	system("pause");
}

