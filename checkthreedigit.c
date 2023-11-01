// check a num is three digit nubmer or not 
#include<stdio.h>
int main() {
    int nub;
    printf("enter a number: ");
    scanf("%d",&nub);
    if(nub>99 && nub<1000) printf("number is three digit\n");
    else printf("its not three digit number \n");
}