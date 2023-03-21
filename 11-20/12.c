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
    int divisors = 0;
    int triangle = 1;
    int number = 0;

    for (size_t i = 1; i <= triangle; i++)
    {
        while (divisors <= 500)
        {
            divisors = 0;
            number += triangle;
            if (is_prime(number))
            {
                triangle++;
                break;
            }
            for (size_t j = 1; j * j <= number; j++)
            {
                if (number % j == 0)
                {
                    divisors += 2;
                    printf("%d: %d\n", number, j);
                    printf("%d\n", divisors);
                }
            }
            triangle++;
        }
    }
    return 0;
}