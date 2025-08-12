/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n1, n2;

	printf("Digite um nC:mero: ");
	scanf("%i", &n1);

	printf("Digite outro nC:mero: ");
	scanf("%i", &n2);

	if(n1 > n2) {
		printf("O numero maior C) %i", n1);
		int sub = n1 - n2;
		printf("\nA subtraC'C#o dos dois numeros C) %i", sub);
	} else if(n2 > n1) {
		printf("O numero maior C) %i", n2);
		int sub = n2 - n1;
		printf("\nA subtraC'C#o dos dois numeros C) %i", sub);
	} else {
		printf("Os numeros %i e %i sC#o iguais", n1, n2);
		printf("\nA subtraC'C#o dos dois numeros C) igual a 0");
	}
}