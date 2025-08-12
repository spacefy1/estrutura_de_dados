/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tam, i;
    printf("Digite o tamanho do array: ");
    scanf("%i", &tam);
    
    int num[tam];
    int quantidade = 0;
    int menor = num[0];
    int maior = num[0];
    
    for(i = 0; i <= tam; i++){
        
        
        printf("Digite o número %i dentro do array: ", i);
        scanf("%d", &num[i]);
        
        
        
        if(num[i] < 0){
            printf("ERROR!! Não pode digitar numero negativo\n");
            break;
        }
        
        quantidade++;
    }
    
    for(i = 1; i < quantidade; i++){
        if(num[i] < menor) {
            menor = num[i];
            
            
        } 
        
        if(num[i] > maior){
            maior = num[i];
            
            
        }
    }
    
    printf("O menor número é: %i", menor);
    
    printf("O maior número é: %i", maior);
       
    
}