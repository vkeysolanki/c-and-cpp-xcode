#include<stdio.h>
int main() {
    int n;
    printf("enter number ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0) {
        if(n%15!=0){
            printf("%d divisible by 3 or 5 but not 15",n);
        }
        else {
            printf("divisible by 15 ");
        }
    }
    else printf("not divisible by 3 or 5");
}