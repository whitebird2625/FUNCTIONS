#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
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
				 int    asNum,      // IN - assignment number
				 char   asType);    // IN - assignment type
								    // 'L' = Lab,
								    // 'A' = Assignment


/******************************************************************************
 * ARRAY
 *****************************************************************************/

/************************************
 * find largest number in the array
 ***********************************/
int MaxAr(int arr[], int size);

/************************************
 * find smallest number in the array
 ***********************************/
int MinAr(int arr[], int size);

/***********************************
 * separate number into two arrays
 **********************************/
void SepretAr(int list[],
			  int list1[],
			  int list2[],
			  int size);



/*******************************************************************************
 * STRING
 ******************************************************************************/

/***********************************
* check is the value in the range
***********************************/
bool CheckAccept (char CHECK,       // IN - the character will been check
		          int  value,       // IN - the checked value
				  const int  min,   // IN - the minimum value for range
				  const int  max);  // IN - the maximum value for range

/*************************************
* check is input the letter you want
**************************************/
char CheckLetter();

/****************************************
 * check how many VOWELS char in a word
 ****************************************/
int CheckVowels(string word);

/************************
 * upper case your word
 ************************/
string UppercaseWord(string name);



/*******************************************************************************
 * CALCULATE
 ******************************************************************************/

/***********************
 * convert temperature
 **********************/
float ConvertTemp(string temp = "f", float value);


#endif /* HEADER_H_ */










