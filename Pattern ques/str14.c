//find the first occurance of a character
#include<stdio.h>
int main(){
    char str[]= "hello";

int i;
for(i=0;i<=4;i++)
    if(str[i]=='e'){
        printf("the character is find at index %d",i);
        }
        
    else
    {
      printf("not found\n");
    }
    
    


    return 0;
}