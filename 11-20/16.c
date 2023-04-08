/*
2023 - Palguno Wicaksono

The copyright holders grant the freedom to copy, modify, convey, adapt, and/or
redistribute this work under the terms of the Massachusetts Institute of Technology License.
A copy of that license is available at https://license.icaksh.my.id/MIT
*/

/*
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
*/

#include <stdio.h>
#define MAX 5000

int main()
{
    int data[MAX], i, j, carry, sum, sum_of_digits;
    for (i = 0; i < MAX; i++)
    {
        data[i] = 0;
    }

    data[MAX - 1] = 1;

    for (i = 0; i < 1000; i++)
    {
        carry = 0;
        for (j = MAX - 1; j >= 0; j--)
        {
            sum = (data[j] * 2) + carry;
            data[j] = sum % 10;
            carry = sum / 10;
        }
    }

    i = 0;
    while (data[i] == 0)
    {
        i++;
    }

    for (j = i; j < MAX; j++)
    {
        sum_of_digits += data[j];
    }
    printf("%d\n", sum_of_digits);
    return 0;
}