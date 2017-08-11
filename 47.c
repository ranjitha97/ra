#include <stdio.h>

int main()
{
    int a[100];
    int i, max, min, s;

    
    printf("Enter size of the array: ");
    scanf("%d", &s)
    printf("Enter elements in the array: ");
    for(i=0; i<s; i++)
    {
        scanf("%d", &a[i]);
    }

    
    max = a[0];
    min = a[0];

   
    for(i=1; i<s; i++)
    {
   
        if(a[i]>max)
        {
            max = a[i];
        }

  
        if(a[i]<min)
        {
            min = a[i];
        }
    }

 
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}
