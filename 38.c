#include <stdio.h>
int main()
{
    double a, b, c;

    printf("Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if( a>=b && a>=b )
        printf("%.2d is the largest number.", a);

    if( b>=a && b>=c )
        printf("%.2d is the largest number.", b);

    if( c>=a && c>=b)
        printf("%.2d is the largest number.", c);

    return 0;
}
