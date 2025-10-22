#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int temp=n,res;
	while(temp!=0)
	{
		int last=temp%10;
		res=res*10+last;
		temp/=10;
	}
	if(res==n)
	printf("Palindrom");
	else
	printf("Not palindrom");
}
