#include "header.h"

/************************************
 * find smallest number in the array
 ***********************************/

int MinAr(int arr[], int size)

{
	int index;
	int min;

	min = arr[0];

	for (index = 1; index < size; index++)
	{
		if (arr[index] < min)
		{
			min = arr[index];
		}
	}

	return min;
}




