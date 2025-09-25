#include<stdio.h>
int main(){
	char a,b;
	printf("Enter  two characters:");
	scanf("%c %c",&a,&b);
	if (a==b)
		printf("The Given Characters are equal ");
	else
		printf("The Given Characters are not equal");
	return 0;
}