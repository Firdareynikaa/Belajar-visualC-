// XR5-15-01 FIRDA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;
float Nilai, N;
string NH;

void main()
{
	cout << "\n Nilai (0 - 100) = "; cin >> Nilai; N = Nilai / 100 * 4;

	if (N >= 3.67 && N <= 4.00) NH = "A"; else
		if (N >= 3.66 && N < 3.67) NH = "A -"; else
			if (N >= 3.33 && N < 3.66) NH = "B +"; else
				if (N >= 3.00 && N < 3.33) NH = "B"; else
					if (N >= 2.66 && N < 3.00) NH = "B -"; else
						if (N >= 2.33 && N < 2.66) NH = "C +"; else
							if (N >= 2.00 && N < 2.33) NH = "C"; else
								if (N >= 1.66 && N < 2.00) NH = "C -"; else
									if (N >= 1.33 && N < 1.66) NH = "D +"; else
										NH = "D";

	cout << "\n Nilai Rapor = " << N;
	cout << "\n Nilai Huruf = " << NH;

	cout << "\n\n "; system("pause");
}

