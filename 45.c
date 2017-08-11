#include<stdio.h>
int getnumber();    

int main()
{

    int a = 0;
    
    a = getnumber();
   
    while (!((a <= 9) && (a >= 1)))
    {
        printf("[ERROR] The number you entered is out of range");
  
        a = getnumber();
    }
    
    printf(" The number you entered is %d", a);
    return 0;
}      


int getnumber()
{    
    int b;
    
    scanf("%d", &b);
    return (b);
}
