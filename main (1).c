/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1, n2, n3, soma;
    
    printf("Digite um número: ");
    scanf("%i", &n1);
    
    printf("Digite outro número: ");
    scanf("%i", &n2);
    
    printf("Digite outro número: ");
    scanf("%i", &n3);
    
    soma = n1 + n2 + n3;
    
    printf("Aqui está o numero %i", soma);
}