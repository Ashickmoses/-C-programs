#include<stdio.h>
int main(){
	int a,b,c;
	float tot,avg;
	scanf("%d%d%d",&a,&b,&c);
	tot=a+b+c;
	avg=tot/3;
	printf("%f",avg);
	return 0;
}