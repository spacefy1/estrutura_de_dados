
#include <stdio.h>

int fatorial(int n){
    int result, ard, test;
    
    if(n <= 4){
        
        fatorial(n+1);
        
        ard = (n-1);
        
        test = n * ard;
        
        printf("%d! = %d * %d! \n", n, n, ard);
        printf("%d\n", test);
        
    }
    
    return test;
    
}

int main()
{
    int n = 0;
    
    fatorial(n);
}