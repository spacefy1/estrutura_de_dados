/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num[6] = {1, 0, 5, -2, -5, 7};
    int i;
    int n1 = num[0];
    int n2 = num[1];
    int n3 = num[5];
    int sum;
    
    sum = n1 + n2 + n3;
    
    printf("Aqui está a soma dos numeros no array: %i", sum);
    
    int n4 = num[4] = 100; 
    
    printf("\nAqui está o o numero 4 do array %i \n", n4);
    
    for (i = 0; i <= 5; i++){
        int ap = num[i];
        printf("%i \n", ap);
    }
}
