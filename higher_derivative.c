// nth derivative of y = 1/x
#include <stdio.h>
int main()
{
    int n, i;
    long long fact = 1;

    printf("Enter value of n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid value of n");
        return 0;
    }

    // Calculate n!
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    if (n % 2 == 0)
    {
        printf("The %dth derivative is: %lld/x^%d", n, fact, n + 1);
    }
    else
    {
        printf("The %dth derivative is: -%lld/x^%d", n, fact, n + 1);
    }
    return 0;
}