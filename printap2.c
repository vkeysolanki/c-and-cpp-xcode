#include<stdio.h>
int main() {
    int n;
    printf("enter a n_term:");
    scanf("%d",&n);
    int a=4;
    for(int i=1; i<=n; i++) {
        printf("%d ",a);
        a=a+3;
    }
    return 0;
}