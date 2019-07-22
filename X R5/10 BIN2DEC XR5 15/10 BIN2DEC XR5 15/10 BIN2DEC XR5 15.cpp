// 10 BIN2DEC XR5 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <math.h>
using namespace std;
int B, D, X = 0;


int main()
{
	cout << "\n VC++ Project";
	cout << "\n ============";
	cout << "\n Bin BIN = "; cin >> B;
	do
	{
		D += B % 10 * pow(2, X++);
		B /= 10;
	} 
	while (B > 0);
	cout << " Bil DEC = " << D;
	cout << "\n\n "; system("pause");
}

