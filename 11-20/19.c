/*
2023 - Palguno Wicaksono

The copyright holders grant the freedom to copy, modify, convey, adapt, and/or
redistribute this work under the terms of the Massachusetts Institute of Technology License.
A copy of that license is available at https://license.icaksh.my.id/MIT
*/

#include <stdio.h>

int main(void)
{
    int counter = 0;
    int days_passed, days_in_month = 1;
    for (size_t i = 1901; i <= 2000; i++)
    {
        for (size_t j = 1; j < 12; j++)
        {
            if (j == 4 || j == 6 || j == 9 || j == 11)
            {
                days_in_month = 30;
            }
            else if (j == 2)
            {
                if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
                {
                    days_in_month = 29;
                }
                days_in_month = 28;
            }
            else
            {
                days_in_month = 31;
            }
            if (days_passed % 7 == 0)
            {
                counter++;
            }
            days_passed += days_in_month;
        }
    }
    printf("%d", counter);
    return 0;
}