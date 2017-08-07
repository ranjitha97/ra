#include <stdio.h>
int main()
{
    int x, reversedInteger = 0, remainder, originalInteger;
    printf("Enter an integer: ");
    scanf("%d", &x);
    originalInteger = x
    while( x!=0 )
    {
        remainder = x%10;
        reversedInteger = reversedInteger*10 + remainder;
        x /= 10;
    }
    
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    
    return 0;
}
