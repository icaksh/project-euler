/*
2023 - Palguno Wicaksono

The copyright holders grant the freedom to copy, modify, convey, adapt, and/or
redistribute this work under the terms of the Massachusetts Institute of Technology License.
A copy of that license is available at https://license.icaksh.my.id/MIT
*/

/*
If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?


NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.
*/

#include <stdio.h>
#define MAX 5000

int main()
{
    int sum, dec, per, dig, thou;
    int total_sum = 0;
    int letters[10] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4};
    int decimals[10] = {0, 3, 6, 6, 5, 5, 5, 7, 6, 6};
    int teen[10] = {0, 6, 6, 8, 8, 7, 7, 9, 8, 8};
    int percent = 7;
    int thousand = 8;
    for (size_t i = 1; i <= 1000; i++)
    {
        sum = 0;
        thou = i % 10000;
        per = thou % 1000;
        dec = (per % 100);
        dig = dec % 10;
        if ((thou / 1000) != 0)
        {
            printf("thou = %d ", thou / 1000);
            sum += letters[thou / 1000] + thousand;
            if (per != 0)
            {
                sum += 3;
            }
        }
        if ((per / 100) != 0)
        {
            printf("per = %d ", per / 100);
            sum += letters[per / 100] + percent;
            if (dec != 0)
            {
                sum += 3;
            }
        }
        if ((dec / 10) != 0)
        {
            printf("dec = %d ", dec / 10);
            sum += decimals[dec / 10];
        }
        if ((dec / 10) == 1)
        {
            if (dig == 0)
            {
                sum += -3 + decimals[dec / 10];
            }
            else
            {
                printf("dig = %d\n", dig);
                sum += -3 + teen[dig];
            }
        }
        else if (dig != 0)
        {
            printf("dig = %d\n", dig);
            sum += letters[dig];
        }
        printf("%d\n", sum);
        total_sum += sum;
    }
    printf("%d\n", total_sum);
}