#include"stdafx.h"
#include"binary_search_recursive.h"

int binary_search(int ar[], int first, int last, int num)
{
	if (first <= last)
	{
		int mid = first + (last - first) / 2;
		if (ar[mid] == num)
			return mid;
		else if (ar[mid] > num)
			return binary_search(ar, first, mid - 1, num);
		else if (ar[mid] < num)
			return binary_search(ar, mid + 1, last, num);
	}

	return -1;
}