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

/**************************************
 * for(dateType identifier : arrName)
 * 	{
 * 		statement
 * 	}
 * ----------------------------------
 * This way can not use in function,
 * because list pass by reference(address),not array
 * but could use in main.cpp
 *************************************/
//		for (int num : arr)
//		{
//			if(max < num)
//			{
//				max = num;
//			}
//		}

/**************************************
 * Recursion
 *************************************/
//		int MaxFind (int list[],int lowIndex, int upperIndex)
//		{
//			int max;
//
//			if (lowIndex == upperIndex)
//			{
//				return list[lowIndex];
//			}
//			else
//			{
//				max = MaxFind(list,lowIndex +1,upperIndex);
//				if (list[lowIndex] >= max)
//					return list[lowIndex];
//				else
//				{
//					return max;
//				}
//			}
//		}



