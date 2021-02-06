#include <stdio.h>
int main()
{
    float a;
    float b;
    printf("enter the first number\n");
    scanf("%f",& a);
    printf("enter the second number\n");
    scanf("%f",& b);
    printf("the sum of a and b is %f\n", a + b);
    printf("the difference of a and b is %f\n ", a - b);
    printf("the value of a divided by b is %f\n", a / b);
    printf("the multiplication of a and b is %f\n", a * b);
    return 0;
}