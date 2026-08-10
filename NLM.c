#include <stdio.h>
#include <math.h>
int main() {
    /*Two blocks of masses m₁ and m₂ are placed on two smooth inclined planes making angles α and β,
    respectively, with the horizontal. The blocks are connected by a massless and inextensible string passing over a smooth pulley.*/
    //here alpha denoted as c and beta donoted as b
    //m1 equals to m and m2 equals to n
    #define PI 3.141592653589793
    float a, b, c, g, m, n;
    printf("Enter the Value of Gravitational Acceleration:");
    scanf("%f",&g);
    printf("\nEnter the value of m:");
    scanf("%f",&m);
    printf("\nEnter value of n:");
    scanf("%f",&n);
    printf("\nEnter the value of alpha which is denoted as c:");
    scanf("%f",&c);
    printf("\nEnter the value of beta:");
    scanf("%f",&b);
    if (m <= 0 || n <= 0 || g <= 0)
    {
        printf("Invalid!\n");
        return 0;
    }
    // Convert degrees to radians
    c = c * PI / 180.0;
    b = b * PI / 180.0;

    a= (g*(m*sin(c)- n*sin(b)))/(m+n);
    
    printf("\nAcceleration of the system is %f m/s^2",a);
    return 0;
}