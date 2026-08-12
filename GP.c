//GP
#include <stdio.h>
#include <math.h>
int main() {
    float x=0.0,term;
    int a,r,i,n;
    printf("Enter first term:");
    scanf("%d",&a);
    printf("Enter common ratio:");
    scanf("%d",&r);
    printf("\nEnter number of terms:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        term= a* pow(r,(i-1));
        x= x+term;
    }
    printf("\nGP=%f",x);
    return 0;
}