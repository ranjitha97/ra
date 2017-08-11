#include<stdio.h>
int getnumber();    

int main() {

    int i = 0;
    
    i = getnumber();
    
    
    while (!((i<= 9) && (i >= 1)))
    {
        printf("[ERROR] The number you entered is out of range");
      
        i = getnumber();
    }
    
    printf("  The number you entered is %d", i);
    return 0;
}      


int getnumber()
{    
    int num;
    
    scanf("%d", &num);
    return (num);
}
