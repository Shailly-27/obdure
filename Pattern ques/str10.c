//count number of words
#include<stdio.h>
int main(){
    char str[10]="new prog";
    int i;
    int word=1;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '|| str[i]=='\n'||str[i]=='\t')
        {
            word++;
        }
    }
    printf("the number of words is %d",word);
    return 0;
}