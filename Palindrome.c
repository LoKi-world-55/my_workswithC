#include <stdio.h>
int main() {
    int x, r=0, m;
    printf("Enter a Palindrome Number");
    scanf("%d",&m);
    x= m;
    while (m> 0)
    {
        r= r*10 + m% 10;
        m= m/10;
    }
    if (x==r)
    printf("\n%d is a Palindrome number",x);
    else
    printf("\n%d is not a Palindrome Number",x);
    return 0;
}