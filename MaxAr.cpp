#include "header.h"

/************************************
 * find largest number in the array
 ***********************************/

int MaxAr(int arr[], int size)

{
	int index;
	int max;

	max = arr[0];

	for (index = 1; index < size; index++)
	{
		if (arr[index] > max)
		{
			max = arr[index];
		}
	}

	return max;
}


