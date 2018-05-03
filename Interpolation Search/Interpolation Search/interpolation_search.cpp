#include "stdafx.h"
#include "interpolation_search.h"
#include<cmath>

int interpolation_search(int ar[], int size, int num)
{
	if (ar[0]>num || ar[size - 1]<num)
	{
		return -1;
	}

	int first = 0;
	int last = size - 1;

	while (first < last)
	{
		int pos = first + ((num - ar[first])*(last - first) / (ar[last] - ar[first]));
		if (ar[pos] == num)
			return pos;
		else if (ar[pos] > num)
			last = pos - 1;
		else if (ar[pos] < num)
			first = pos + 1;
	}

	if (num == ar[first])
		return first;
	else
		return -1;
}

