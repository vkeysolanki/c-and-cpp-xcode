#include<stdio.h>
int main() {
    int i,n;
    printf("enter number: ");
    scanf("%d",&n);

    for(i=4; i<=4+(n-1)*3; i=i+3) {
        printf("%d ",i);
    }
}