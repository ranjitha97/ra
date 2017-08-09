#include <stdio.h>
  int main()
  {
    int a[10];
    int i;
    int g;
    printf("Enter ten values:");
    
    for (i = 0; i < 10; i++)
    {
    	scanf("%d", &a[i]);
    }

    g = a[0];
    for (i = 0; i < 10; i++)
    {
	if (a[i] > g)
  {
	g = a[i];
    }
    }
    printf("
    Greatest of ten numbers is %d", g);
    return 0;
  }
