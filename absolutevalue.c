// convert the absolute value 
#include<stdio.h>
int main() {
    int inum; // inum=integer namber 
    printf("enter integer number : ");
    scanf("%d",&inum);
    if(inum<0) {
        inum= inum*(-1);
    }
    printf("the absolute value of  is %d\n",inum);
}