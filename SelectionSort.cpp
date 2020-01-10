#include "header.h"

void SelectionSort (int list[], int size)
{
	int index;
	int smallIndex;
	int location;
	int temp;

	for(index = 0; index < size-1; index++)
	{
		smallIndex = index;
		for(location = index + 1; location < size; location++)
		{
			if(list[location] < list[smallIndex])
			{
				smallIndex = location;
			}
		}

		temp = list[smallIndex];          // save small number in temp
		list[smallIndex] = list[index];   // swaps
		list[index]=temp; 				  // save small number in list
	}
}


