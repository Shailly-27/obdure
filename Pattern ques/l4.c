#include <stdio.h>
#include <math.h>

int main(){
    //int count = 0;
    int n,fir;
     printf("enter the number");
     scanf("%d",&n);
    while(n >= 10)
    {
        n = n / 10;
        
    }
    fir = n;
    printf("first digit = %d", n);
    
return 0;
}