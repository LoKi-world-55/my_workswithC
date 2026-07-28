#include <stdio.h>
#include <conio.h>
#define full marks 400
void main()
{
    int a,b,c,d; /* DECLARED THE VARIABLES */
    int total;
    float percentage;
    printf("Enter the number of Physics");
    scanf("%d",&a);
    printf("\nEnter the number of Chemistry");
    scanf("%d",&b);
    printf("\nEnter the number of maths");
    scanf("%d",&c);
    printf("\nEnter the number of Computer Science");
    scanf("%d",&d);
    total = a+b+c+d;
    percentage = (total * 100.0/400);
printf("\nTotal Marks =%d",total);
printf("\nPercentage =%.2f%%",percentage);
getch();
}

