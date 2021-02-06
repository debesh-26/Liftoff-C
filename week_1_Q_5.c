#include<stdio.h>
int main()
{
char  x;
printf("enter a english alphabet\n");
scanf("%c",&x);
switch (x)
{
case 'a' :
    printf("it is a vowel");
    break;
case 'e':
printf("it is a vowel");
break;
case 'i':
printf("it is a vowel");
break;
case 'o':
printf("it is a vowel");
break;
case 'u':
printf("it is a vowel");
break;
default:
    printf("it is a consonant");
}

return 0;
}