// IF AND ELSE.cpp : Defines the entry point for the console application.
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
if (A > B && A > C && A > D) cout << "\n A Terbesar..";
else if (B > C && B > D) cout << "\n B Terbesar..";
else if (C > D) cout << "\n C Terbesar..";
else cout << "\n D Terbesar..";
cout << "\n\n "; system("pause");
}

