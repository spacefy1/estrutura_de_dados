/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1, i;
	int n2[30];
	int elementos = 0;

	for(i = 0; i < 30; i++) {
		printf("Digite um numero");
		scanf("%i", &n1);



		if (n1 < 0) {
			printf("Numero negativo digitado, parando o programa... ");

			if(elementos >0) {
				int maior = n2[0];
				for(i = 1; i < elementos; i++) {
					if(n2[i] > maior) {
						maior = n2[i];
					}
				}
			}

			break;
		}

		n2[i] = n1;
		elementos++;




	}
}