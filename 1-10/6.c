/*
2023 - Palguno Wicaksono

The copyright holders grant the freedom to copy, modify, convey, adapt, and/or
redistribute this work under the terms of the Massachusetts Institute of Technology License.
A copy of that license is available at https://license.icaksh.my.id/MIT
*/

#include <stdio.h>

int main(void)
{
    int n = 100;
    int sum_square = 0;
    int square_sum = 0;
    for (size_t i = 1; i <= n; i++)
    {
        sum_square = sum_square + (i * i);
        square_sum = square_sum + i;
    }
    square_sum = square_sum * square_sum;
    printf("%d\n%d\n%d", sum_square, square_sum, (square_sum - sum_square));
    return 0;
}