#include "header.h"

/**********************************************************
* FUNCTION DrawStar
*_________________________________________________________
* This function receives an integer
* then draw a trangle stars.

***********************************************************/
void DrawStar(int lines)
{
	int star;
	int space;

	space = lines;

	for(star =1; star <= lines; star++)
	{
		int count;

		for(count = 1; count <= space; count++)
		{
			cout << " ";
		}

		for(count = 1; count <= star; count++)
		{
			cout << " *";
		}
		cout << endl;
		space --;
}

