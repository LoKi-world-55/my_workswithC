#include <stdio.h>
int main()
{
    int n,i;
    double x,term,sum;
    printf("Enter value of x in radians:");
    scanf("%lf",&x);
    printf("\nEnter no of terms:");
    scanf("%d",&n);
    term=1;
    for(i=1;i<=n;i++)
    {
        sum+=term;
        term= -term*x*x/((2*i)*(2*i-1));
    }
    printf("\ncos(%.10lf)=%.6lf",x,sum);
    return 0;
}