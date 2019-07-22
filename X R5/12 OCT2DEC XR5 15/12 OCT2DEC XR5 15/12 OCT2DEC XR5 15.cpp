// 12 OCT2DEC XR5 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <math.h>
using namespace std;
int O, D, X = 0;


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
	while (O > D);
	cout << " Bil DEC = " << D;
	cout << "\n\n "; system("pause");
}

