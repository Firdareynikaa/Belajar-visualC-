// 01 BELANJA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void main()
{
	char nb[50]; //char itu karakter, //nb untuk menampung nama barang
	int hb; //untuk harga barang
	cout << "\n Moklet Super Mart \n";
	cout << " =================\n" << "\n";
	cout << " Nama Barang  = ";
	cin.getline(nb, 50);
	cout << " Harga Barang = ";
	cin >> hb;
	cout << "\n Anda membeli " << nb << " seharga Rp." << hb;
	cout << "\n " << "\n";

	system("pause");
}

