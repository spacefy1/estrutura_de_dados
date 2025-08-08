/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int i = 10;

	while(i >= 0) {
		printf("%i \n", i);
		if(i == 0) {
			printf("FIM!");
		}
		i--;

	}
}