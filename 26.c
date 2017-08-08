#include <stdio.h>
 
int main()
{
    char    str[100];
    int countDigits,countAlphabet,countSpecialChar,countSpaces;
    int c;
    countDigits=countAlphabet=countSpecialChar=countSpaces=0;
    printf("Enter a string: ");
    gets(str);
    for(c=0;str[c]!=NULL;c++)
    {
        if(str[c]>='0' && str[c]<='9')
            countDigits++;
        else if((str[c]>='A' && str[c]<='Z')||(str[c]>='a' && str[c]<='z'))
            countAlphabet++;
        else if(str[c]==' ')
            countSpaces++;
        else
            countSpecialChar++;
    }
 
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",countDigits,countAlphabet,countSpaces,countSpecialChar);
    return 0;
}
