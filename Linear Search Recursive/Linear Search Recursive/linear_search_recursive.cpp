#include"stdafx.h"
#include"linear_search_recursive.h"

int linearSearch(int ar[], int size, int num)
{
	if ((size - 1) >= 0)
	{
		if (ar[size - 1] == num)
			return (size - 1);
		else
			return (linearSearch(ar, size - 1, num));
	}
	return -1;
}