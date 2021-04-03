#include<stdio.h>
void main(){
int n;
printf("Enter the number of elements");
scanf("%d",&n);
int ar[n];
printf("Enter the elements");
for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);
}
int min=ar[0];
for(int i=0;i<n;i++){
    if(ar[i]<min){
        min=ar[i];
    }

}
printf("The minimum value is %d\n",min);
}
