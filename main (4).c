/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int i;

	for(i = 3; i <= 15; i++) {
		if (i % 3 == 0) {
			printf("%i,", i);
		}
	}
}