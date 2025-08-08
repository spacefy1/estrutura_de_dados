/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int i;
	int b = 1;
	int a = 1;

	printf("\nFazendo com for \n");

	for(i = 1; i <= 100; i++) {
		printf("%i,", i);
	}

	printf("\nFazendo com while \n");

	while(b <= 100) {
		printf("%i,", b);
		b++;
	}

	printf("\nFazendo com do-while \n");

	do {
		printf("%i,", a);
		a++;
	} while(a <= 100);

}