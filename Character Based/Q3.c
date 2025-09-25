#include<stdio.h>
int main(){
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if('A'<=ch && 'Z'>=ch || 'a'<=ch && 'z'>=ch)
		printf("The Given Character is Alphabet");
	else
		printf("The Given Character is not alphabet");
	return 0;
}