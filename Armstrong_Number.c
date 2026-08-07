#include <stdio.h>
#include <math.h>
int main() {
    int n, m, r=0;
    printf("Enter the number:");
    scanf("%d",&n);
    m=n;
    while (m != 0)
{
    int digit = m % 10;
    r = r + digit * digit * digit;
    m = m / 10;
}
    if(n==r)
    printf("\n%d is an Armstrong Number",n);
    else
    printf("\n%d is not an Armstrong number",n);
    return 0;
}