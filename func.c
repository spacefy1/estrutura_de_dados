/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void incremental(int n)
{
	n += 1;

	printf("Dentro da funcao: x = %d\n", n);
}

void incrementalref(int *n)
{
    *n = *n + 1;
    printf("Dentro da funcao ref: x = %d\n", *n);
}

int main()
{
	int x = 5;
	printf("Antes da fncao: x = %d\n", x);

	incrementalref(&x);

	printf("Depois da fncao: x = %d\n", x);
	return 0;
	
}