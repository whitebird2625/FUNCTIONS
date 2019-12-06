#include "header.h"

/**********************************
 * separate number into two arrays
 **********************************/

void SepretAr(int list[],int list1[], int list2[],int size)

{
	int index;

	for (index = 0; index < size ; index++)
	{
		// save in #odd number in array
		list1[index] = list[index*2+1];

		// save in #even number in array
		list2[index] = list[index*2];
	}
}




