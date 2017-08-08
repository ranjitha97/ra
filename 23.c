#include <stdio.h>
int main()
{
    int n1, n2, a, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(a=1; a <= n1 && a <= n2; ++i)
    {
        if(n1%a==0 && n2%a==0)
            gcd = a;
    }
    printf("G.C.D of %d and %d is %d", n1, n2, gcd);
    return 0;
}
