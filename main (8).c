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
    
    printf("Digite sua idade: ");
    scanf("%i", &n1);
    
    printf("Digite quantos anos você trabalhou: ");
    scanf("%i", &n2);
    
    if((n1 >= 65) || (n2 >= 30) || ((n1 >= 60)&& (n2 >= 25))){
        printf("Voce está aposentado!");
    }else{
        printf("Voce nao está aposentado");
    }
}