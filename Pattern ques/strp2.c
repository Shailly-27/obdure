// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,m;
    printf("enter the number of row");
    scanf("%d",&n);
    printf("enter the number of column");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
} 