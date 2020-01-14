/***************************************
 * change Decimal to Binary
 **************************************/
#include "header.h"

void DecToBin(int decimal)
{
	if (decimal > 0)
	{
		DecToBin(decimal / 2);  // change 2 to the base(2-10) you want
		cout << decimal % 2;
	}
}
