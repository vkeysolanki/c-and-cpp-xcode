#include<stdio.h>
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
   int  product=1;
    for(int i=1; i<=n; i++) {
        product = product*i;
        printf("factorial of this number %d is %d \n",i,product);
    }

    printf("%d",product);
}