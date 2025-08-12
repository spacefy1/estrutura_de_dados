/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1, i;
    
    printf("Digite um número: ");
    scanf("%i", &n1);

    for(i = n1; i >= 0; i--)
        if(i % 2 == 0){
            printf("%i, ", i);
        }
}