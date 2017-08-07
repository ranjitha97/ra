#include <stdio.h>
int main()
{
    int a, b;
    long long result = 1;
    printf("Enter a a number: ");
    scanf("%d", &a);
    printf("Enter an b: ");
    scanf("%d", &b);
    while (b != 0)
    {
        result *= a;
        --b;
    }
    printf("Answer = %d", result);
    return 0;
}
