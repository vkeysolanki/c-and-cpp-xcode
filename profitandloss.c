// find lost and profit 
#include<stdio.h>
int main() {
    int sp,cp;
    printf("enter selling price : ");
    scanf("%d",&sp);
    printf("enter cost price:");
    scanf("%d",&cp);
    if(sp>cp) printf("profit of %d",sp-cp);
    else if( sp==cp) printf("no profit or loss");
    else printf("loss of %d",cp-sp);
    
}