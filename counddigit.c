#include<stdio.h>
int main() {
    int n;
     // n=number
    printf("enter a number :");
    scanf("%d",&n);
    int count=0;
    while(n>0) {
        n=n/10;
        count++;

    }
   printf(" thie digit is %d",count);
}