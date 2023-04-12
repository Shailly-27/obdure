//reverse the string
#include<stdio.h>
int main(){
    char str[10]="hello";
    int i,len=0;
    char s;
    //char  rev[10];
    for(i=0;str[i]!='\0';i++)
    { 
        len++;
    }
    for(i=len-1;i>=0;i--)
    {
        // printf("%c",str[i]);
    }
      // printf("%s",str);
      
            s = str[len-1];
            str[len-1] = str[0];
            str[0] = s;
            s = str[len-2];
            str[len-2] = str[1];
            str[1] = s;
            printf("%s",str);

       
    return 0;
}