// XR5-15-02 FIRDA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void main()
{
	char NB[10];
	int HB, RP, N;
	int I = 0, TT = 0; // inisialisasi nilai awal var. I dan TT

	cout << "\n SUPER MARKET SUPER\n";
	cout << "\n Jumlah Barang  : "; cin >> N;

LOOP: // label bernama LOOP
	I++;
	cout << "\n " << I << ". Nama Barang : "; cin >> NB, 10;
	cout << "    Harga Barang : Rp."; cin >> HB;
	TT = TT + HB;
	if (I < N) goto LOOP; //jika nilai I < N arus program looping ke LOOP:

	cout << "\n         Total : Rp." << TT;
	cout << "\n         Bayar : Rp."; RP; cin >> RP;

	if (RP > TT)
		cout << "       Kembali : Rp." << RP - TT;
	cout << "\n\n            Thanks!!\n\n";

	system("pause");
}

