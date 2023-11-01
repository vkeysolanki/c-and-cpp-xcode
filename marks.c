#include<stdio.h>
int main() {
    int sm;// student_mark
    printf("enter marks :  ");
    scanf("%d",&sm);
    if(sm>=90) printf("excellence\n");
    else if(sm>=80) printf("Very good\n");
    else if(sm>=70) printf("good\n");
    else if(sm>=60) printf("can do better\n");
    else if(sm>=50) printf("Average\n");
    else if(sm>=40) printf("below average\n");
    else  printf("fail\n");
    return 0;
}