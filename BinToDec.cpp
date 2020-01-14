/************************************
 * Binary to Decimal
 ***********************************/
#include "header.h"

void BinToDec(long binNum,    //Pass in binary value
		       int &decimal,  // sum up the decimal
			   int &weight)   // the weight of binary number
{
	int bit;

	if (binNum > 0)
	{
		bit = binNum % 10;       // the value(0||1) on the bit
		decimal = decimal + bit * static_cast<int>(pow(2.0,weight));
		binNum = binNum / 10;   //move to next bit
		weight++;
		BinToDec(binNum, decimal, weight);
	}

}
