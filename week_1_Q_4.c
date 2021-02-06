#include <stdio.h>
int main()
{
    float phy, chem, bio, math, computer;

    printf("enter numbers in phy chem bio math and comp\n");
    scanf("%f %f %f %f %f", &phy, &chem, &bio, &math, &computer);
    float avg;
    avg =((phy + chem + bio + math + computer) / 5);
    if (avg >= 90)
    {
        printf("your grade is A");
    }
    else if ((avg < 90) && (avg >= 80))
    {
        printf("your grade is B");
    }
    else if ((avg < 80) && (avg >= 70))
    {
        printf("your grade is C");
    }

    else if (avg < 70 && avg >= 60)
    {
        printf("your grade is D");
    }
    else if (avg < 60 && avg >= 50)
    {
        printf("your grade is E");
    }
    else if (avg< 50 && avg >= 40)
    {
        printf("your grade is E");
    }

    else if (avg < 40)
    {
        printf("your grade is F");
    }
}