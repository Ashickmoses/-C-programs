#Include<stdio.h>
void main()
{
	int a,key;
	scanf("%d",&a);
	int b[a];
	for(int i=0;i<n;i++)
	scanf("%d",&B[i]);
	scanf("%d",&key);
	for(int i=n-1;i>=0;i--)
	{
		if(b[i]==key)
		{
			printf("%d",i);
			return 0;
		}
	}
	printf("-1");
}
