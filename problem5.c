#include<stdio.h>
int main() {
    float num;
    printf("enter a float : ");
    scanf("%f",&num);
    int num2=num;
    float num3= num-num2;
    printf("%f",num3);
}