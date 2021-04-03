#include <stdio.h>

int main() {
  int n;
  int sum=0;

  printf("Enter number integers: ");
  scanf("%d",&n);

  printf("Enter nubmer values:");
  int values[n];
  for(int i = 0; i < n; ++i) {
     scanf("%d", &values[i]);
  }
  for(int i = 0; i < n; ++i) {
     if(values[i]%2==0){
        sum += values[i];
     }
  }
  for(int i = 1; i < n; i+=2) {
     if(values[i]%2!=0){
        sum += values[i];
     }
  }
  printf("%d",sum);
  return 0;
}