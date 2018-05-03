#include"stdafx.h"
#include <cmath>
#include"exponential_search.h"

int exponential_search(int ar[], int size, int num)
{
	if (ar[0]>num || ar[size - 1]<num)
	{
		return -1;
	}

	int first = 0;
	int last = 2;

	while (ar[last]< num)
	{
		if ((last + 1) >= size)
			break;
		first = last + 1;
		last = fmin(last * 2, size - 1);
	}

	while (first <= last)
	{
		int mid = first + (last - first) / 2;

		if (ar[mid] == num)
			return mid;
		else if (ar[mid] < num)
			first = mid + 1;
		else if (ar[mid] > num)
			last = mid - 1;
	}

	return -1;

}