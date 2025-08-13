/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int i;
    
    int num[6];
    
    int n1 = 6;
    //tenho total conhecimento que esta nao é a melhor forma de 
    //percorrer um array sem tamanho definido, porem nao quero
    //me complicar
    
    for (i = 1; i <= n1; i++){
        int pr = num[0];
        
        if (i == n1){
            pr = num[i];
            printf("%i, ", pr);
        }
        
        printf("Digite um numero da posiçao %i do array: ", i);
        scanf("%d", &num[i]);
        
        
        
        
    }
    
}