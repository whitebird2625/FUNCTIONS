#include "header.h"

/************************************
 * find largest number in the array
 ***********************************/

int MaxAr(int arr[], int size)

{
	int index;
	int max;

	// compare first two number, find the largest
	if (arr[0] > arr[1])
	{
		max = arr[0];
	}
	else
	{
		max = arr[1];
	}

	// compare the max number with all other numbers, find largest
	for (index = 2; index < size; index++)
	{
		if (arr[index] > max)
		{
			max = arr[index];
		}
	}

	return max;
}


