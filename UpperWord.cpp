#include "header.h"

/**********************************************************
* FUNCTION UppercaseWord
*_________________________________________________________
* This function receives a word
* then upper case each character
* - returns string with upper case name.
* _________________________________________________________
***********************************************************/

string UppercaseWord(string word)
{
	int index;
	int size;

	size = sizeof(word);

	//PROCESSING : upper case each character
	for(index = 0; index < size; index++)
	{
		word[index] = toupper(word[index]);
	}

	return word;

}
