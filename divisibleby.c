// Take positive integer input and tell if it is divisible by 5 and 3.
#include<stdio.h>
int main() {
    int n;
    printf("ente a nubmer: ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0) printf("divisible by 5 or 3\n");
    else printf("not divisible by 5 0r 3\n");
    return 0;
}