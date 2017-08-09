#include <stdio.h>
int main()
{
    int i, x, a = 0, b= 1, Term;

    printf("Enter the number of terms: ");
    scanf("%d", &x);

    printf("Fibonacci Series: ");

    for (i = 1; i <= x; ++i)
    {
        printf("%d, ", a);
        Term = a + b;
        a = b;
        b= Term;
    }
    return 0;
}
