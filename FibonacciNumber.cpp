/************************************
 * Fibonacci Number
 ***********************************/
#include "header.h"

int FibNumber(int a,  // the first number
			  int b,  // the second number
			  int n)  // the value of the nth number
{
	if (n ==1)      // looking for first number, return a;
	{
		return a;
	}
	else if (n ==2)  // looking for second number, return b;
	{
		return b;
	}
	else
	{
		return FibNumber(a,b,n-1) + FibNumber(a,b,n-2); //sum up the first and second number before the nth number
	}
}
