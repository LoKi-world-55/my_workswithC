#define N 10
#include <stdio.h>
int main()
{
    int count; /* DECLARATION OF */
    float sum, average, number; /* DECLARATION OF VARIABLES */
    sum = 0; /* INITIALIZATION*/
    count = 0; /* OF VARIABLES */
    while (count < N)
    { scanf("%f", &number);
        sum = sum + number;
        count = count + 1;
    }
    average = sum/N;
    printf("N = %d sum = %f", N, sum);
    printf("average = %f", average);
}
