#include "header.h"

/**********************************************************
* FUNCTION CheckLetter
*_________________________________________________________
* This function receives an letter
* then check is the letter 'm''M'(male), 'f''F'(female)or 'x''X'(exit).
*_________________________________________________________
* PRE-CONDITIONS
* The following parameters need to have a defined value prior to
* calling the function:
*
* letter -
*
* POST-CONDITIONS
* This function will return a char value.
***********************************************************/

char CheckLetter()
{

    bool invalidGender;
    char letter;

    do
	{
	  cout << "(ENTER THE LETTER YOU NEED CHEECK):";
	  cin.get(letter);
	  cin.ignore(10000, '\n');

	  invalidGender = ("YOUR CONDITISSION");

	  // PROCESSING : output a error message if the input is invalid
	  if (invalidGender)
	  {
		  cout << "ERROR MESSAGE";
	  }

	}while(invalidGender);

	return letter;
}


