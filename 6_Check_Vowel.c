/* 
Find the Character Is Vowel or Not.

a,e,i,o,u or A,E,I,O,U are vowels.
*/

#include<stdio.h>
main()
{
	char ch, choice;
	
	printf("\n\n\t Enter a character to check : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a'  : 				  
		case 'e'  : 
		case 'i'  : 
		case 'o'  : 
		case 'u'  : printf("\n\n\t It is a vowel...");
					break;
					
		case 'A'  : 				  
		case 'E'  : 
		case 'I'  : 
		case 'O'  : 
		case 'U'  : printf("\n\n\t It is a vowel...");
					break;
		
		default : printf("\n\n\t It is a consonant..");
				  break;
	}
}
