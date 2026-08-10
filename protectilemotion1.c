#include <stdio.h>
#include <math.h>
int main() {
    //Application of Projectile Motion
    //Time of Flight
    float t, u, g, theta;
    printf("Enter initial velocity:");
    scanf("%f",&u);
    printf("Enter the value of gravitational acceleration:");
    scanf("%f",&g);
    printf("Angle of Projection:");
    scanf("%f",&theta);
    if(u<=0 || g<=0)
    {
        printf("\nInvalid input!");
        return 0;
    }
     theta = theta * 3.141592653589793 / 180.0;
    t= (2*u*sin(theta))/g;
    printf("\nThe time of flight is %.2f seconds",t);
    return 0;
}