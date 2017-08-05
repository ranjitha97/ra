#include <stdio.h>
int main()
{
    char ab;
    printf("Enter any character: ");
    scanf("%d", &ab);
    if(ab=='a' || ab=='e' || ab=='i' || ab=='o' || ab=='u' || ab=='A' || ab=='E' || ab=='I' || ab=='O' || ab=='U')
    {
        printf("%d is VOWEL.", ab);
    }
    else if((ab >= 'a' && ab <= 'z') || (ab >= 'A' && ab <= 'Z'))
    {
        printf("%d is CONSONANT.", ab);
    }
 
    return 0;
} 
