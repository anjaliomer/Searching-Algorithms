#include "stdafx.h"
#include "linear_search.h"
#include<iostream>

using namespace std;

int linearSearch(int ar[], int size, int num)
{
	int *ptr = new int[size+1];
	for (int i = 0; i <= size; i++)
	{
		if (i != size)
			ptr[i] = ar[i];
		else
			ptr[i] = num;
	}

	int i = 0;
	while (ptr[i] != num)
		i++;

	delete ptr;
	
	if (i < size)
		return i;
    else
		return -1;

}


