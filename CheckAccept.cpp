/***************************************************************************
 * AUTHOR        : Zhiren Zheng
 * SUTDENT ID    : 1087249
 * ASSIGNMENT 6  : Boolean Expressions & Functions
 * CLASS         : CS1A
 * SECTION       : MW 11AM
 * DUE DATE      : 11/27/2019
 **************************************************************************/

#include "header.h"

/**********************************************************
* FUNCTION CheckAccept
*_________________________________________________________
* This function receives the gender, a integer value and the object
* then returns - true if it been accept
*                false if it not.
*_________________________________________________________
* PRE-CONDITIONS
* The following parameters need to have a defined value prior to
* calling the function:
*
* gender    : user's gender
* value     : the checked value
* min   : the minimum value for range
* max   : the maximum value for range
*
* POST-CONDITIONS
* This function will returns - true if it been accept
*                              false if it not.
***********************************************************/

bool CheckAccept (char CHECK,       // IN - the character will been check
		          int  value,       // IN - the checked value
				  const int  min,   // IN - the minimum value for range
				  const int  max,   // IN - the maximum value for range
				  )
{
    bool accept;

    accept = ((check == '????')value >= min && value <= max);

    return accept;
}




