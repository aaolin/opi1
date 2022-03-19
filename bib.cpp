#include <string>
#include <cmath>
#include <iostream> // возможно убрать
#include "bib.h"

using namespace std;


int add(int firstarg, int secondarg){
	int base1 = 16, sum = 0, i = 0, j;
	// string firstarg;
	string a = "0123456789ABCDEF";
	// cin >> firstarg; //ввод строки n
	int size = firstarg.size(); //определение размера строки
	for (i = 0; i < size; i++)
	{
		if (firstarg[i] > a[base1 - 1]) { return 0; } //проверка: наличия n в k-ичной сс
		for (j = 0; j < 17; j++)
			if (firstarg[i] == a[j]) { sum += j * pow(base1, size - i - 1); break; }
	}

	int base2 = 16, sum2 = 0, k = 0, x;
	// string secondarg;
	string b = "0123456789ABCDEF";
	// cin >> secondarg; //ввод строки n
	int size2 = secondarg.size(); //определение размера size строки n
	for (k = 0; k < size2; k++)
	{
		if (secondarg[k] > b[base2 - 1]) { return 0; } //проверка: наличия n в k-ичной сс
		for (x = 0; x < 17; x++)
			if (secondarg[k] == b[x]) { sum2 += x * pow(base2, size2 - k - 1); break; }
	}

	int result;
	result = sum + sum2;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::uppercase);
	// cout << result;
return 0;
}


int sub(int firstarg, int secondarg){
	int base1 = 16, sum = 0, i = 0, j;
	string firstarg;
	string a = "0123456789ABCDEF";
	cin >> firstarg; //ввод строки n
	int size = firstarg.size(); //определение размера size строки n
	for (i = 0; i < size; i++)
	{
		if (firstarg[i] > a[base1 - 1]) { return 0; } //проверка: наличия n в k-ичной сс
		for (j = 0; j < 17; j++)
			if (firstarg[i] == a[j]) { sum += j * pow(base1, size - i - 1); break; }
	}

	int base2 = 16, sum2 = 0, k = 0, x;
	string secondarg;
	string b = "0123456789ABCDEF";
	cin >> secondarg; //ввод строки n
	int size2 = secondarg.size(); //определение размера size строки n
	for (k = 0; k < size2; k++)
	{
		if (secondarg[k] > b[base2 - 1]) { return 0; } //проверка: наличия n в k-ичной сс
		for (x = 0; x < 17; x++)
			if (secondarg[k] == b[x]) { sum2 += x * pow(base2, size2 - k - 1); break; }
	}

	int result;
	result = sum - sum2;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::uppercase);
	// cout << result;
return 0;
}

   
int multi(int firstarg, int secondarg){
	int base1 = 16, sum = 0, i = 0, j;
	string firstarg;
	string a = "0123456789ABCDEF";
	cin >> firstarg; //ввод строки n
	int size = firstarg.size(); //определение размера size строки n
	for (i = 0; i < size; i++)
	{
		if (firstarg[i] > a[base1 - 1]) { return 0; } //проверка: наличия n в k-ичной сс
		for (j = 0; j < 17; j++)
			if (firstarg[i] == a[j]) { sum += j * pow(base1, size - i - 1); break; }
	}

	int base2 = 16, sum2 = 0, k = 0, x;
	string secondarg;
	string b = "0123456789ABCDEF";
	cin >> secondarg; //ввод строки n
	int size2 = secondarg.size(); //определение размера size строки n
	for (k = 0; k < size2; k++)
	{
		if (secondarg[k] > b[base2 - 1]) { return 0; } //проверка: наличия n в k-ичной сс
		for (x = 0; x < 17; x++)
			if (secondarg[k] == b[x]) { sum2 += x * pow(base2, size2 - k - 1); break; }
	}

	int result;
	result = sum * sum2;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::uppercase);
	// cout << result;
return 0;
}

