/*
2023 - Palguno Wicaksono

The copyright holders grant the freedom to copy, modify, convey, adapt, and/or
redistribute this work under the terms of the Massachusetts Institute of Technology License.
A copy of that license is available at https://license.icaksh.my.id/MIT
*/

#include <stdio.h>

int pythagorean_triplet(int c)
{
    int a = 0;
    int b = 0;
    for (size_t i = 1; i < c; i++)
    {
        a = i;
        for (size_t j = 1; j < c; j++)
        {
            b = j;
            if (sqrt((a * a) + (b * b)) == c)
            {
                printf("A=%d, B=%d, C=%d IS TRIPLET \n", a, b, c);
                if ((a + b + c) == 1000)
                {
                    printf("A=%d + B=%d + C=%d = 1000 \n", a, b, c);
                    printf("abc = %d \n", (a * b * c));
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main(void)
{
    int found = 0;
    int i = 1;
    while (!found)
    {
        if (pythagorean_triplet(i))
        {
            return 0;
        }
        i++;
    }

    return 0;
}