// print 19 table
#include<stdio.h>
int main() {
    int table;
    printf("enter a number:");
    scanf("%d",&table);
    for(int i=1; i<=10; i++){
        printf("%d\n",table*i);
    }
}