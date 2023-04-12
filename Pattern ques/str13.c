//check the string is palindrome or not
#include<stdio.h>
int main(){
    char str[10]="madam";
    int i,len=0;
    //char  rev[10];
    for(i=0;str[i]!='\0';i++)
    { 
        len++;
    }
    for(i=len-1;i>=0;i--)
    {
         printf("%c ",str[i]);
    }
    if(str[0]==str[len-1])
    {
        printf("\nthe string is palindrome");
    }
    else 
    {
        printf("string is not palindrome");
    }
       //printf("%s",str);

    return 0;   
}