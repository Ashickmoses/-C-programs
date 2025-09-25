#include<stdio.h>
int main(){
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if('0'<=ch && '9'>=ch)
		printf("The Given Character is digit");
	else
		printf("The Given Character is not digit");
	return 0;
}