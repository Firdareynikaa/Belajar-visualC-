// 09 DEC 2 BIN.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <math.h>
using namespace std;
int D, B, X = 0;

int main()
{
	cout << "\n VC++ project";
	cout << "\n ============";
	cout << "\n Bin DEC = "; cin >> D;
	do
	{
		B += D % 2 * pow(10, X++);
		D /= 2;
	} 
	while (D > 0 );
	cout << " Bil BIN = " << B;
	cout << "\n\n "; system("pause");

}

