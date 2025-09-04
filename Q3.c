#include<stdio.h>
int main()
{
    int str[100];
    printf("Enter the message:");
    scanf("%[^\n]",str);
	printf("%s",str);
    return 0;
}