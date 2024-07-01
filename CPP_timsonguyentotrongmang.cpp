// CPP_timsonguyentotrongmang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int so[5];
	int snt = 0;
    
	for (int i = 0; i < 5; i++)
	{
		cout << "nhap so thu " << i << ":";
		cin >> so[i];
	}
	for (int i = 2; i <=5; i++)
	{
		bool IP = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0)
			{
				IP = false;
				break;

			}
		}
		if (IP)
		{
			cout << i << " ";
		}
	}
	return 0;

}

