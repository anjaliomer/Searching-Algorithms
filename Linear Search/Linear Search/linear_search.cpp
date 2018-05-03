#include"stdafx.h"
#include"linear_search.h"

int linearSearch(int ar[], int size, int num)
{
	for (int i = 0; i<size; i++)
	{
		if (ar[i] == num)
			return i;
	}
	return -1;
}