//count the alphabet,number and spcl character in string
#include<stdio.h>
int main(){
    char str[10]="hello@27";
    int i;
    int alpha=0;
    int num=0;
    int spcl=0;
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A'&& str[i]<='Z')||str[i]>='a'&& str[i]<='z')
        {
            alpha++;
        }
        else if(str[i]>='0'&& str[i]<='9')
        {
            num++;
        }
        else
        {
            spcl++;
        }
    }
    printf("the total no. of alpha %d",alpha);
    printf("the total no. of num %d",num);
    printf("the total no. of spcl character %d",spcl);

    return 0;
}