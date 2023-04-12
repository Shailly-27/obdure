//count the total number of vowel and string
#include<stdio.h>
int main(){
    char str[11]="newstring";
    int vow=0;
    int cons=0;
    int i;
    for(i=0;str[i]!='\0';i++)
     {
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {  
            vow++;
        }
        else
        {
           cons++; 
        }
       }
    printf("the total no.of vowel is %d\n",vow);
    printf("the total no. of consonent is %d\n",cons);
    
    
return 0;
}
        



