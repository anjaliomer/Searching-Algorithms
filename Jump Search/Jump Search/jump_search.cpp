#include"stdafx.h"
#include <cmath>
#include"jump_search.h"

int jump_search(int ar[], int size, int num)
{
	if (ar[0]>num || ar[size - 1]<num)
	{
		return -1;
	}

	int first = 0;
	int last = sqrt(size) - 1;

	while (ar[last]< num)
	{
		if ((last + 1) >= size)
			break;
		first = last + 1;
		last = fmin(last + sqrt(size), size - 1);
	}

	for (int i = first; i <= last; i++)
	{
		if (ar[i] == num)
			return i;
		else if (ar[i] > num)
			return -1;
	}
}
