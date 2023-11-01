#include<stdio.h>
int main() {
    int n1,n2,n3;
    printf("enter   number: ");
    scanf("%d",&n1);
    printf("enter   number: ");
    scanf("%d",&n2);
    printf("enter   number: ");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3) printf(" %d is greatest number \n",n1);
     if(n2>n1 && n2>n3) printf(" %d is greatest number \n",n2);
      if(n3>n1 && n3>n2) printf(" %d is greatest number \n",n3);
}

