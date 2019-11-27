#include "header.h"

/**********************************************************
* FUNCTION PrintHeader
*_________________________________________________________
* This function receives an assignment name, type and number
* then outputs the appropriate header - returns nothing.
*_________________________________________________________
* PRE-CONDITIONS
* The following parameters need to have a defined value prior to
* calling the function:
*
* programmer : programmer's name
* studentID  : student's id number
* asName     : Assignment Name
* asNum      : Assignment Number
* asType     : Assignment Type - 'L' - for Labs
*                                'A' - for Assignments
*
* POST-CONDITIONS
* This function will output the class heading.
***********************************************************/

void PrintHeader(string programmer, // IN - programmer's name
		         int    studentID,  // IN - student's id number
		         string asName,     // IN - assignment Name
					int asNum,      // IN - assignment number
				   char asType)     // IN - assignment type
								    // 'L' = Lab,
								    // 'A' = Assignment
{
	cout << left;
	cout << "**************************************************\n";
	cout << "* PROGRAMMED BY : " << programmer << endl;
	cout << "* " << setw(14) << "STUDENT ID : " << studentID << endl;
	cout << "* " << setw(14) << "CLASS" << ": CS1A - MW 11AM\n" ;
	cout << "* " ;


	// PROCESSING ¨C This will adjust setws and format appropriately
	//              based on if this is a lab 'L' or assignment 'A'
	if (toupper(asType) == 'L')
	{
		cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}
	cout << asNum << ": " << asName << endl;
	cout << "**************************************************\n\n";
	cout << right;
}



