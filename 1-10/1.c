/*
2023 - Palguno Wicaksono

The copyright holders grant the freedom to copy, modify, convey, adapt, and/or
redistribute this work under the terms of the Massachusetts Institute of Technology License.
A copy of that license is available at https://license.icaksh.my.id/MIT
*/

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>

int sum_div(int target, int number)
{
    int p = target / number;
    int sum_num = number * p * (p + 1) / 2;
    return sum_num;
}

int main(void)
{
    int target = 999;
    printf("%d\n", (sum_div(target, 3) + sum_div(target, 5) - sum_div(target, 15)));
    return 0;
}