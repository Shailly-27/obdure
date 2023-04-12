//Palindrome no.
#include <stdio.h>

int main() {
    int n,num;
    int rev=0;
    printf("enter the number");
    scanf("%d",&num);
    n=num;
    while(n>0){
        int last =n%10;
        rev=rev*10+last;
        n=n/10;
    }
    printf("the reverse no. is :- %d\n",rev);
    if(n==0)
    {
        printf("the no. is plaindrome\n");
    }
    else
    {
        printf("the no. is not palindrome\n");
    }
    
    

    return 0;
}