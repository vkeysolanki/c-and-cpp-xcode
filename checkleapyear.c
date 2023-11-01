// check the leap year 
#include<stdio.h>
int main() {
    int leapyear;
    printf("enter the leapyear : ");
    scanf("%d",&leapyear);
    if(leapyear%400==0 && leapyear%4==0) printf("%d is leapyear",leapyear);
    else printf("%d is not leapyear ",leapyear);
}