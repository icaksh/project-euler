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
#define MAX 5000

int main()
{
    int a[MAX], i, j, temp, m, x, n, sum;
    a[0] = 1;
    m = 1;
    n = 100;
    for (i = 2; i <= n; i++)
    {
        temp = 0;
        for (j = 0; j < m; j++)
        {
            x = a[j] * i + temp;
            a[j] = x % 10;
            temp = x / 10;
        }
        while (temp > 0)
        {
            a[m] = temp % 10;
            temp = temp / 10;
            m++;
        }
    }
    for (i = m - 1; i >= 0; i--)
    {
        sum += a[i];
    }
    printf("%d\n", sum);
    return 0;
}