/*

C Program to Check Uppercase or Lowercase or Digit or Special
Character. 

*/

#include<stdio.h>

main()
{
	char value;
	
	printf("\n\n\t Input a value : ");
	scanf("%c",&value);
	
	if(toascii(value)>=65 && toascii(value)<=90)
		printf("\n\n\t This is a albhabet in upper case....");
		
	else if(toascii(value)>=97 && toascii(value)<=122)
		printf("\n\n\t This is a albhabet in lower case....");
		
	else if(toascii(value)>=48 && toascii(value)<=57)
		printf("\n\n\t This is a digit....");
		
	else
		printf("\n\n\t This is a special symbol....");

}
