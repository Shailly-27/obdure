//Factorial
#include<stdio.h>
int main(){
    int fac=1,n,i;
    printf("enter the value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     fac=fac*i;
        }

    printf("the factoril of a number is = %d",fac);
return 0;        
}