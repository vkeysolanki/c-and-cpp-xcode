// check divisible by 3 or 5 but not divisible by 15
#include<stdio.h>
int main() {
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if((n%5==0 || n%3==0) && n%15!=0) 
    {
        printf("%d is divisible by 5 or 3 but not 15 ",n);
    }
    else {
        printf("not matching condition  ");
    }
}