//reverse a string
#include<stdio.h>
int main(){
    char str[10]="hello";
    int i,len=0;
    //char  rev[10];
    for(i=0;str[i]!='\0';i++)
    { 
        len++;
    }
    for(i=len-1;i>=0;i--)
    {
        // printf("%c",str[i]);
    }
       printf("%s",str);

    return 0;
}