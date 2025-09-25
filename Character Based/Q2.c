#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
        if('A'<=ch && 'Z'>=ch)
          printf("The Given Character is uppercase");
        else if('a'<=ch && 'z'>=ch)
          printf("The Given Character is lowercase");
        else if('0'<=ch && '9'>=ch)
           printf("The Given Character is digit");
        else
           printf("The Given Character is special symbol");
     return 0;
 }
	
	
	
	
	
    	