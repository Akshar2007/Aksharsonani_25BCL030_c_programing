#include <stdio.h>

void main()
{
    float a,b;
    printf("enter temperature in celcius\n");
    scanf("%f",&a);
    b=(9/5.0)*a+32; 
    printf("the temperature in fahrenheit is %.1f°F\n",b);
}
