#include "stdafx.h"
#include "linear_search.h"

int linearSearch(int ar[], int size, int num)
{
	if(ar[0]>num || ar[size-1]<num)
		return -1;
	
	for (int i = 0; i < size; i++)
	{
		if (ar[i] == num)
			return i;
		else if (ar[i] > num)
			return -1;
	}
}


