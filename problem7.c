// find the smallest number
#include<stdio.h>
int main() {
    int n1,n2,n3;
    printf("enter a number : ");
    scanf("%d",&n1);
    printf("enter a number : ");
    scanf("%d",&n2);
    printf("enter a number : ");
    scanf("%d",&n3);
    if(n1<n2) {
        if(n1<n3) printf("%d is smalledt  number",n1);
        else printf("%d is smallest  number ",n3);
    }
    else {
        if(n2<n1) printf("%d is smallest number",n2);
        else printf("%d is smallest  number",n3);
    }
}


