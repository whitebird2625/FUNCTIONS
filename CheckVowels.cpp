#include "header.h"
/*****************************************
 * check how many vowels char in a word
 *****************************************/
int CheckVowels(string word)
{
	bool vowels;
	int count;
	int index;
	int size;

	count = 0;
	size = word.size();


	for (index = 0; index < size; index++)
	{
		vowels = word[index] == 'a' || word[index] == 'e' ||
				 word[index] == 'i' || word[index] == 'o' ||
				 word[index] == 'u' || word[index] == 'y';

		if (vowels)
		{
			count += 1;
		}
	}

	return count;
}

/*
 * The other way is
 *
 * char a[] = "aeiouy"
 *
 * for (...)
 * {
 * 	for(a[]...)
 * 	{
 * 		if(a[i]=list[i])
 * 		{
 * 			cout +
 * 		}
 * 	}
 * }
 */






