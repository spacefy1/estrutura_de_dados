/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade, trabalho;
    
    printf("Digite uma idade: ");
    scanf("%i", &idade);
    
    printf("Quantos anos voce trabalhou: ");
    scanf("%i", &trabalho);
    
    if (idade >= 65){
        printf("Voce está aposentado. ");
    }else if(trabalho >= 30){
        printf("Voce está aposentado. ");
    } else if(idade >= 60 || trabalho >= 25){
        printf("Voce está aposentado. ");
        
    } else{
        printf("Voce nao está aposentado. ")
    }
}