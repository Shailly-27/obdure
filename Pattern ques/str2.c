//copy one string to another
#include<stdio.h>
int main(){
    char str[10]="hello";
    char str2[10]="buddy";
    int i;
    for(i=0;str2[i]!='\0';i++)
    {
        str2[i]=str[i];
    }
    printf("copied string %s",str2);
    return 0;
}