#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
      if(a<b&&a<c)
        printf("Smaller= %d",a);
      else if(b<c)
        printf("Smaller= %d",b);
      else
        printf("Smaller= %d",c);
    return 0;
}