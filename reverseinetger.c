#include <stdio.h>
#include <conio.h>
int reverse(int x)
{
    int rev = 0;
    while (x != 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev;
}

int main(void)
{
    int x;
    printf("Enter the Number: ");
    if (scanf("%d", &x) != 1) return 1;
    x = reverse(x);
    printf("Reversed: %d", x);
    return 0;
}



