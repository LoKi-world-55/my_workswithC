#include <stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double x,term,sum=0;
    printf("Enter value of x in radians:");
    scanf("%lf",&x);
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    term=x;
    for(i=1;i<=n;i++)
    {
      sum+=term;
      term= -term* x * x/((2*i)*(2*i+1));
    }
    printf("\nsin(%.2lf)=%.6lf",x,sum);
    return 0;
}