/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1, n2;
    
    printf("Digite um número: ");
    scanf("%i", &n1);
    
    printf("Digite outro número: ");
    scanf("%i", &n2);
    
    if(n1 > n2){
        printf("O numero maior é %i", n1);
    }else if(n2 > n1){
        printf("O numero maior é %i", n2);
    }else{
        printf("Os numeros %i e %i são iguais", n1, n2);
    }
}
