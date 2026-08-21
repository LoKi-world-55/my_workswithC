#include <stdio.h>
#include <math.h>
int main()
{
    #define PI 3.141592653589793
    int n, i;
    double x , answer;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("\nEnter value of x: ");
    scanf("%lf", &x);
     x = x * PI / 180.0; /*Converting Degree to Radian*/
    if (n == 0)
    {
        answer = x;
    }
    else if (n == 1)
    {
        answer = -cos(x);
    }
    else
    {
        answer = 0;

        for (i = n; i >= 2; i -= 2)
        {
            answer = -(pow(sin(x), i - 1) * cos(x)) / i
                     + ((double)(i - 1) / i) * answer;
        }

        if (n % 2 == 0)
            answer += x * 0;   
        else
            answer += 0;       
    }
    printf("\nResult = %lf\n", answer);
    return 0;
}