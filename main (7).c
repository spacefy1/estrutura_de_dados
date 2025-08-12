/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int choice, n1, n2;

	printf("Digite um nC:mero: ");
	scanf("%i", &n1);

	printf("Digite outro nC:mero: ");
	scanf("%i", &n2);

	
	printf("Escolha a opcao: \n1- Soma de 2 nC:meros. \n2- Diferenca entre 2 numeros (maior pelo menor).\n3- Produto entre 2 numeros.\n4- Divisao entre 2 numeros (o denominador nao pode ser zero).\nOpcao:");
	scanf("%i", &choice);


	if(choice == 1) {
		int som = n1 + n2;
		printf("Resultado %i", som);
	} else if(choice == 2) {
		if(n1 > n2) {
			int som = n1 - n2;
			printf("Resultado %i", som);
		} else if(n2 > n1) {
			int som = n2 - n1;
			printf("Resultado %i", som);
		} else {
			printf("Resultado = 0");
		}
	} else if(choice == 3) {
		int som = n2 * n1;
		printf("Resultado %i", som);
	} else if(choice == 4) {
		int soma = n1 / n2;

		if((n1 == 0) || (n2 == 0)) {
			printf("ERRO!! O denominador nao pode ser zero, repita o comando");
		}

		printf("Resultado %i", soma);
	} else{
		    printf("ERRADO! Digite denovo");
	}
}