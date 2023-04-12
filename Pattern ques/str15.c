#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to search: ");
    scanf("%c", &ch);

    len = strlen(str);

    for (i = len - 1; i >= 0; i--) {
        if (str[i] == ch) {
            printf("Last occurrence of '%c' is at position %d\n", ch, i);
            return 0;
        }
    }

    printf("'%c' not found in the string.\n", ch);
    return 0;
}
