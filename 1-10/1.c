#include<stdio.h>

int sum_div(int target, int number){
    int p = target/number;
    int sum_num = number*p*(p+1)/2;
    return sum_num;
}

int main(void){
    int target = 999;
    printf("%d\n", (sum_div(target, 3) + sum_div(target, 5) - sum_div(target, 15)));
    return 0;
}