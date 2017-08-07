#include <stdio.h>     
int main()
{  
    int c; 
    printf("Even numbers between 1 to 100\n");  
    for(c = 1; c <= 100; c++)
    {    
        if(c%2 == 0)
        { 
    printf("%d ", c);  
        }  
    }  
    return 0;  
} 
