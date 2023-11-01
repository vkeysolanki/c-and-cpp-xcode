#include<stdio.h>
int main() {
    int i=65;
    for(i=65; i<=90;i++){
       // printf("%c\n",i); simple option
       printf("%d ",i);
       char ch=(char)i;
       printf("%c \n",ch);
    }
}