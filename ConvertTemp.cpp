#include "header.h"

float ConvertTemp(string temp, float value)
{
	float a;

	if (temp == "c")
		a = (value + 40) * 1.8 - 40;
	else
		a = (value + 40) / 1.8 - 40;

	return a;
}

