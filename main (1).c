/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int n1, n2;

	printf("Digite um numero par: ");
	scanf("%i", &n1);


	if(n1 == 0) {
		printf("Nao C) possivel fazer o calculo, repita de novo o numero");
	} else {
		for (n2 = n1; n2 > 0; n2--) {
			if(n2 % 2 != 1) {
				printf("%i,", n2);
			}
		}
	}

}