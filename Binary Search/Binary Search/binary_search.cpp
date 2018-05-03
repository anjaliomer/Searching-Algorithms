#include"stdafx.h"
#include"binary_search.h"

int binary_search(int ar[], int size, int num)
{
	if (ar[0]>num || ar[size - 1]<num)
	{
		return -1;
	}

	int first = 0;
	int last = size - 1;

	while (first <= last)
	{
		int mid = first + (last - first) / 2;
		if (ar[mid] == num)
			return mid;
		else if (ar[mid] > num)
			last = mid - 1;
		else if (ar[mid] < num)
			first = mid + 1;
	}

	return -1;
}