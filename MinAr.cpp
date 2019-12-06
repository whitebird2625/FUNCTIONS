#include "header.h"

/************************************
 * find smallest number in the array
 ***********************************/

int MinAr(int arr[], int size)

{
	int index;
	int min;

	//find the smallest number in first two number
	if (arr[0] < arr[1])
	{
		min = arr[0];
	}
	else
	{
		min = arr[1];
	}

	//compare the smallest number with all number in array, find smallest
	for (index = 2; index < size; index++)
	{
		if (arr[index] < min)
		{
			min = arr[index];
		}
	}

	return min;
}




