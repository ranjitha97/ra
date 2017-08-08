#include <stdio.h>
int main()
{
    int a, b, minMultiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    minMultiple = (a>b) ? a : 
    while(1)
    {
        if( minMultiple%a==0 && minMultiple%b==0 )
        {
            printf("The LCM of %d and %d is %d.", a, b,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}
