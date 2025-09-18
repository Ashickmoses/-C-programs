#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b=a%10;
      if(b%3==0)
        printf("divisible by 3 ");
      else
        printf("Not divisible by 3 ");
    return 0;
}