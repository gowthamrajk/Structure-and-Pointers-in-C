#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() 
{
    char *str=malloc(sizeof(char));
    printf("Enter the String\n");
    scanf("%s",str);
    printf("The characters in String are: \n");
    for(int index=0;index<strlen(str);index++)
    {
        printf("%c",*(str+index));
    }
    return 0;
}