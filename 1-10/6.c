#include<stdio.h>
#include<math.h>

int main(void){
    int n = 100;
    int sum_square = 0;
    int square_sum = 0;
    for (size_t i = 1; i <= n; i++)
    {
        sum_square = sum_square + (i*i);
        square_sum = square_sum + i;
    }
    square_sum = square_sum*square_sum;
    printf("%d\n%d\n%d", sum_square, square_sum, (square_sum - sum_square));
    return 0;
}