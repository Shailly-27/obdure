#include <stdio.h>

int main() {
    int i,sum,n,avg;
    
    printf("enter the number");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       sum=sum+i;
    avg= sum/n;
   }  
       printf("the sum of no. is %d\n",sum);
       printf("the average of no.%d\n",avg);


    return 0;
}