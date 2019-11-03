#include <iostream>
#include<string.h> 

/* Code By Tomjerry */

using namespace std;

int main()
{
	char string[20];
	int jumlah;
	int j = 0;
	int c;
	
	cout << "Input Teks : ";
	cin >> string;
	jumlah = strlen(string);
	for (int a = 0; a <= jumlah; a++)
	{
		for (int b = jumlah; b >= a; b--)
		{
			cout << " ";
		}
		for (int c = 0; c <= a; c++)
		{	
			cout << "*";	
		}
		
		for (int d = 0; d < a ; d++)
		{
			cout << string[d];	
		}
		cout << endl;
	}
	
	int e = 1;

	strrev(string);
	
	for (int a = 0; jumlah >= a; jumlah--)
	{
		for (int b = 0; b  < e; b++)
		{
			cout << " ";
		}		
		for (int c = jumlah - 1; c >= a; c--)
		{
			cout << string[c];
		}
		for (int d = jumlah; d >= a; d--)
		{
			cout << "*";
		}
		cout << endl;
		e = e + 1;
	}
	return 0;
}
