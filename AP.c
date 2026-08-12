#include <stdio.h>
int main() {
    float x= 0.0,term;
    int a,d,n,i;
    printf("Enter first term:");
    scanf("%d",&a);
    printf("\nEnter Common difference:");
    scanf("%d",&d);
    printf("\nEnter Number of terms:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        term= a+(n-1)*d;
        x=x+term;
    }
    printf("\nSum=%f",x);
    return 0;
}