/*
2023 - Palguno Wicaksono

The copyright holders grant the freedom to copy, modify, convey, adapt, and/or
redistribute this work under the terms of the Massachusetts Institute of Technology License.
A copy of that license is available at https://license.icaksh.my.id/MIT
*/

#include <stdio.h>

int is_prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (size_t i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int max = 2000000;
    long sum = 0;
    int n = 2;
    while (n <= max)
    {
        if (is_prime(n))
        {
            sum = sum + n;
            printf("%d\n", n);
        }
        n++;
    }
    printf("%ld\n", sum);
    return 0;
}