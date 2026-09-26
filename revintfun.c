//Reverse integer of a number using function
#include<stdio.h>
int rev(int);
int main()
{
    int n,r;
    printf("Enter a number");
    scanf("%d",&n);
    r=rev(n);
    printf("\nReverse of %d=%d",n,r);
    return 0;
}

int rev(int m)
{
    int d = 0;

    while(m != 0)
    {
        d = d * 10 + m % 10;
        m = m / 10;
    }

    return d;
}