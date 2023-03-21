/*
2023 - Palguno Wicaksono

The copyright holders grant the freedom to copy, modify, convey, adapt, and/or
redistribute this work under the terms of the Massachusetts Institute of Technology License.
A copy of that license is available at https://license.icaksh.my.id/MIT
*/

#include <stdio.h>

int main(void)
{
    int limit = 4000000;
    int sum = 0;
    int a = 1;
    int b = 1;
    while (b < limit)
    {
        if (b % 2 == 0)
        {
            sum = sum + b;
        }
        int c = a + b;
        a = b;
        b = c;
    }
    printf("%d", sum);
}