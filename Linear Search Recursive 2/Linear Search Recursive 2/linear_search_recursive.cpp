#include"stdafx.h"
#include"linear_search_recursive.h"

int linearSearch(int ar[], int first, int last, int num)
{
	if (first <= last)
	{
		if (ar[first] == num)
			return (first);
		else
			return (linearSearch(ar, first + 1, last, num));
	}
	return -1;
}