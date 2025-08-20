
#include <stdio.h>


void recursiva(int n){
    
    if (n >= 0){
        recursiva(n-1);
        printf("Oi %d\n", n);
        
    } 
    
    
}


int main()
{
    int n = 10;
    int result;
    
    recursiva(n);
    
    
    return 0;
}