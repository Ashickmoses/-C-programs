#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b=a/100;
      if(b%2==0)
        printf("Even= %d");
      else
        printf("Odd= %d");
    return 0;
}