#include<stdio.h>

void cou_vow_and_cons(char* str)
{
    int vow = 0, cons = 0;
 
    int i;
    char c;
 
    for (i = 0; str[i] != '\0'; i++) {
 
        c= str[i];
         if (c == 'a' || c == 'e'
            || c == 'i' || c == 'o'
            || c == 'u' || c == 'A'
            || c == 'E' || c== 'I'
            || c == 'O' || c == 'U')
            vow++;
         else if (c == ' ')
            continue;
        else
            cons++;
    }
     printf("\nVowels: %d", vow);
    printf("\nConsonants: %d", cons);
}
 int main()
{
    char* str = "hello";
    printf("String: %s", str);
 
    cou_vow_and_cons(str);
 
    return 0;
}