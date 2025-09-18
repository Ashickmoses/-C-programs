#include<stdio.h>
int main(){
    int a,b,dif;
    scanf("%d%d",&a,&b);
    dif=a-b;
    printf("Difference= %d\n",dif);
      
	    if(dif%2==0)
          printf("Even= %d",dif);
        else
          printf("Odd= %d",dif);
    return 0;
}