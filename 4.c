#include <stdio.h>  
   int main()
   {  
    char ch;
    printf("Enter ch\n");  
    scanf("%d", &ch);   
    if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is an Alphabet\n", ch);  
    }
    else
    {  
        printf("%c is Not an Alphabet\n", ch);  
    }
   
    return 0;  
}
