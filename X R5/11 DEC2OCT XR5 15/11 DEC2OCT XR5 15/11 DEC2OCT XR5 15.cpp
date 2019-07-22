// 11 DEC2OCT XR5 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <math.h>
using namespace std;
int D, O, X = 0;


int main()
{
	cout << "\n VC++ Project";
	cout << "\n ============";
	cout << "\n Bin DEC = "; cin >> D;
	do
	{
		O += D % 8 * pow(10, X++);
		D /= 8;
	} 
	while (D > O);
	cout << " Bil OCT = " << O;
	cout << "\n\n "; system("pause");
}

