#include <stdio.h>

int main()
{
    int a, i;
    float n[100], sum = 0.0, average;

    printf("Enter the numbers of elements: ");
    scanf("%d", &a);

    while (a > 100 || a <= 0)
    {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &a);
    }

    for(i = 0; i < n; ++i)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%f", &n[i]);
        sum += n[i];
    }

    average = sum / a;
    printf("Average = %.2f", average);

    return 0;
}
