#include <stdio.h>
int main()
{
    float celsius, kelvin;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("kelvin = %.2f k\n", kelvin);
    return 0;
}