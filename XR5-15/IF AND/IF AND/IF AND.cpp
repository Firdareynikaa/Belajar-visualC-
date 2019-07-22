// IF AND.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
int A, C, D, B;

void main()
{
	cout << "\n Nilai A = "; cin >> A;
	cout << "\n Nilai B = "; cin >> B;
	cout << "\n Nilai C = "; cin >> C;
	cout << "\n Nilai D = "; cin >> D;

	if (A > B && A > C && A > D) 
	{ cout << "\n A Terbesar.."; goto J5;};
	if (B > C && B > D) 
	{ cout << "\n B Terbesar.."; goto J5; };
	if (C > D) 
	{ cout << "\n C Terbesar.."; goto J5; };
	cout << "\n D Terbesar..";
J5: cout << "\n\n ";
	system("pause");
}

