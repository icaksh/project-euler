#include<stdio.h>
#include<math.h>

int pythagorean_triplet(int c){
    int a = 0;
    int b = 0;
    for (size_t i = 1; i < c; i++)
    {
        a = i;
        for (size_t j = 1; j < c; j++)
        {
            b = j;
            if(sqrt(pow(a,2)+pow(b,2)) == c) {
                printf("A=%d, B=%d, C=%d IS TRIPLET \n", a,b,c);
                if((a+b+c)==1000){
                    printf("A=%d + B=%d + C=%d = 1000 \n", a,b,c);
                    printf("abc = %d \n", (a*b*c));
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main(void){
    int found = 0;
    int i = 1;
    while (!found)
    {
        if(pythagorean_triplet(i)){
            return 0;
        }
        i++;
    }
    
    return 0;
}