// MAX ABCD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
int A, B, C, D;

void main()
{
	cout << "\n Nilai A = "; cin >> A;
	cout << "\n Nilai B = "; cin >> B;
	cout << "\n Nilai C = "; cin >> C;
	cout << "\n Nilai D = "; cin >> D;

	if (A > B) goto J3;
	if (B > C) goto J2;
J1: if (C > D) { cout << "\n C Terbesar.."; goto J5; }
	cout << "\n D Terbesar.."; goto J5;
J2: if (B > D) { cout << "\n B Terbesar.."; goto J5; }
J3: if (A > C) goto J4;
	goto J1;
J4: if (A > D) { cout << "\n A Terbesar.."; goto J5; }
J5: cout << "\n\n ";
	system("pause");
}

