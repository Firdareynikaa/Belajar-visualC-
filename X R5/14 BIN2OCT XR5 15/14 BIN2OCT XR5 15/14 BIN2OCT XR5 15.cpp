// 14 BIN2OCT XR5 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <math.h>
using namespace std;

int B, D = 0, O = 0, X = 0;



int main()
{
	cout << "\n VC++ Project";
	cout << "\n ============";

	cout << "\n\n Bin BIN = ";
	cin >> B;
	do
	{
		D += (int)(B % 10 * pow(2, X++));
		B /= 10;
	} while (B > 0);

	X = 0;
	do
	{
		O += D % 8 * pow(10, X++);
		D /= 8;
	} while (D > 0);

	cout << " Bil OCT = " << O;

	cout << "\n\n ";
	system("pause");
}

