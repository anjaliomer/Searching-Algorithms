#include"stdafx.h"
#include"linear_search_recursive.h"
#include<iostream>

using namespace std;

int main()
{
	int ar[] = { 1,3,5,7,9,11,13,15,17,19 };
	int size = sizeof(ar) / sizeof(ar[0]);
	int num;
	cout << "\nLinear Search Recursive (Method 2) : Upto 25 values can be searched\n";
	for (int i = 0;i < 25;i++)
	{
		cout << "\nEnter the number to be searched\n";
		cin >> num;
		int rtvl = linearSearch(ar, 0, size - 1, num);
		if (rtvl != -1)
			cout << "\nNumber Found at index " << rtvl << "\n";
		else
			cout << "\nNumber not Found\n";
	}

	return 0;
}