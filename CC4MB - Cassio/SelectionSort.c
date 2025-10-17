#include <stdio.h>
void imprimirVet(int *v, int n){
    printf("\nVetor: |");
    for(int i=0;i<n;i++){
        printf(" %d |", v[i]);
    }
}

void selectionSort(int *v, int n){
    int i, j, menor, aux;
    for(i=0;i<n-1;i++){ //percorre o vetor inteiro.
        menor = i;
        for(j=i+1;j<n;j++){//percorre do i  até o final
            if(v[j]<v[menor]){//verifica se achou um menor que o atual
                menor=j;//atualiza o menor
            }
        }
        if(i!=menor){//se achou um menor que o lugar que estou, eu troco.
            aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
    }
}


int main()
{

    int vetor[10] = {6,75,1,14,24,18,3,7,50,10};
    imprimirVet(vetor, 10);
    selectionSort(vetor, 10);
    imprimirVet(vetor, 10);
    return 0;
    
    
}