#include<stdio.h>
void main(void)
{
  char str1[25],str2[25];
  int a=0,b=0;
  printf("\nEnter First String:");
  gets(str1);
  printf("\nEnter Second String:");
  gets(str2);
  while(str1[a]!='\0')
  i++;
  while(str2[b]!='\0')
  {
    str1[a]=str2[b];
    b++;
    a++;
  }
  str1[a]='\0';
  printf("\nConcatenated String is %s",str1);
}
