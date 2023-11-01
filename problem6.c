// check area of reactangle is greater than perimeter 
#include<stdio.h>
int main() {
    int l,b,area,perimeter;
    printf("enter length of reactangle :");
    scanf("%d",&l);
    printf("enter breath of rectangle : ");
    scanf("%d",&b);
    area= l*b;
    perimeter=2*(l+b);
    if(area>perimeter) printf("area is greater than its perimeter");
    else if(area==perimeter) printf("area is equal its perimeter ");
    else printf("perimeter is greater than its area ");
}