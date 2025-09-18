#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
      if(a>b&&a>c)
        printf("greater= %d",a);
      else if(b>c)
        printf("greater= %d",b);
      else
        printf("greater= %d",c);
    return 0;
}