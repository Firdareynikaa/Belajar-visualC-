// 13 OCT2BIN XR5 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <math.h>
using namespace std;
int O, D = 0, B, X = 0;


int main()
{
	cout << "\n VC++ Project";
	cout << "\n ============";
	cout << "\n Bin OCT = "; cin >> O;
	do
	{
		D += O % 10 * pow(8, X++);
		O /= 10;
	} 
	while (O > 0);
	X = 0;
	do
	{
		B += D % 2 * pow(10, X++);
		D /= 2;
	} while (D > 0);
	
	cout << " Bil BIN = " << B;
	cout << "\n\n "; system("pause");
	
}

