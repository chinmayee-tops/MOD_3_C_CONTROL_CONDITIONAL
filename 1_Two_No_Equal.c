/*
Write a C program to accept two integers and check whether they are equal
or not.
*/

#include<stdio.h>
main()
{
	int n1, n2;
	
	printf("\n\n\t Input Number1 : ");
	scanf("%d",&n1);
	printf("\n\n\t Input Number2 : ");
	scanf("%d",&n2);
	
	if(n1==n2)
		printf("\n\n\t Both the entered numbers are equal....");
		
	else
		printf("\n\n\t Both the entered numbers are not equal....");
}

