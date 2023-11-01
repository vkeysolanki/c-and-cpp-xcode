// print all even numbers from 1 to 100
#include<stdio.h>
int main() {
    int en; //even_num
    
    for(en=1; en<=100; en++){
        if(en%2==0){
            printf("%d ",en);
        }
    }
}
