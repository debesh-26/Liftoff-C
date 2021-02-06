#include <stdio.h>
int main()
{
    float celcious;
    printf("enter the temperature in celsious\n");
    scanf("%f", &celcious);
    float a = celcious * 9 / 5 + 32;
    printf("the temprature in fahrenheit is %f \n", a);
    return 0;
}
