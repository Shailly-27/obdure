//Reverse the number
#include<stdio.h>
int main(){
    int n;
    int rev=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0){
        int last=n%10;
        rev=rev*10+ last;
        n=n/10;
    }
    printf("reverse no. is:-%d",rev);
    
return 0;    
}