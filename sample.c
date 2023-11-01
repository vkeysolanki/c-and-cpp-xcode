#include<stdio.h>
int main() {
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int a=0,sum=0;
    while(n>0){
        a=n%10;
        if(a%2==0) sum=sum+a;
        n=n/10;
    }
    printf("%d",sum);
}