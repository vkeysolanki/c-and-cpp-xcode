#include<stdio.h>
int main() {
    int base,power;
    printf("enter base number :");
    scanf("%d",&base);
    printf("enter power of base:");
    scanf("%d",&power);
    int ans=1;
    for(int i=1; i<=power; i++){
        ans=ans*base;
    }
    printf("%d",ans);
}