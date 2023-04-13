#include<stdio.h>
int main () {
    int n;
    printf("enter a number of row :");
    scanf("%d",&n);

    int m;
    printf("enter a number of columbs :");
    scanf("%d",&m);

    for (int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
    }  