/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1, n3 = 1;
    int n2 = 1;
    
    printf("\n------ Usando for ------\n");
    
    for(n1 = 1; n1 <= 100; n1++){
        printf("%i,", n1);
    }
    
    printf("\n------ Usando while ------\n");
    
    while(n2 <= 100){
        printf("%i,", n2);
        n2++;
    }
    
    printf("\n------ Usando do-while ------\n");
    
    do{
        printf("%i,", n3);
        n3++;
    }while (n3 <= 100);
}