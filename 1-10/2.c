#include<stdio.h>

int main(void){
    int limit = 4000000;
    int sum = 0;
    int a = 1;
    int b = 1;
    while(b<limit){
        if(b%2==0){
            sum = sum + b;
        }
        int c = a+b;
        a = b;
        b = c;
    }
    printf("%d", sum);
}