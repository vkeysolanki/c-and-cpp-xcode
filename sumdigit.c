#include<stdio.h>
int main() {
    int n; // number
    printf("enter number:");
    scanf("%d",&n);
    int lastdigit=0,sum=0;
    while(n>0) {
        lastdigit=n%10;
        sum =sum+lastdigit;
        n=n/10;
    }

    printf("%d ",sum);
}
