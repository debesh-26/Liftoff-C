#include<stdio.h>
#include<string.h>
int main(){
    int b,a,rev=0;
    
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        rev=rev*10+b;
        a=a/10;
    }
    printf("%d\n",rev);
    
}