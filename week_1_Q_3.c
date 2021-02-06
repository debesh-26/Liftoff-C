#include <stdio.h>
int main()
{
    float radius;
    float pi = 3.14;
    printf("enter the value of radius\n");
    scanf("%f", &radius);
    printf("the value of diameter is %f\n", radius / 2);
    printf("the value of circumference is %f\n", pi * 2 * radius);
    printf("the area of the circle is %f\n", pi * radius * radius);

    return 0;
}