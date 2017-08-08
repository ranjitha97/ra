#include <stdio.h>
#include <conio.h>
void main(){
     char s[50],ch;
     int a,c=0;
     clrscr();
     printf("Enter any string : ");
     for(a=0;ch!='\n';a++){
     ch=getchar();
     s[a]=ch;
     }
     s[a]='\0';

     for(a=0;s[a]!='\0';a++){
    if(s[a]==' '){
       c++;
       while(s[a]==' ')
        a++;
    }
     }
     printf("\n\nTotal words are %d",c+1);
     getch();
}
