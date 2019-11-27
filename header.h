

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/***********************************************************************
* PrintHeader
* This function receives programmer's name, student's ID number,
* an assignment name, type and number
* then outputs the appropriate class heading.
* asType is defaulted to Lab as there are more labs than Assignments.
* ==> returns nothing - This will output the class heading.
***********************************************************************/
void PrintHeader(string programmer, // IN - programmer's name
		         int    studentID,  // IN - student's id number
		         string asName,     // IN - assignment Name
					int asNum,      // IN - assignment number
				   char asType);    // IN - assignment type
								    // 'L' = Lab,
								    // 'A' = Assignment

/**********************************************************
* FUNCTION CheckLetter
*_________________________________________________________
* This function receives an letter
* then check is (??????????).
*_________________________________________________________
* PRE-CONDITIONS
* The following parameters need to have a defined value prior to
* calling the function:
*
* letter - (??????????)
*
* POST-CONDITIONS
* This function will return a char value.
***********************************************************/
char CheckLetter();


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
* CHECK    : the chacter you will check
* value    : the checked value
* min      : the minimum value for range
* max      : the maximum value for range
*
* POST-CONDITIONS
* This function will returns - true if it been accept
*                              false if it not.
***********************************************************/
bool CheckAccept (char CHECK,       // IN - the character will been check
		          int  value,       // IN - the checked value
				  const int  min,   // IN - the minimum value for range
				  const int  max);  // IN - the maximum value for range


#endif /* HEADER_H_ */










