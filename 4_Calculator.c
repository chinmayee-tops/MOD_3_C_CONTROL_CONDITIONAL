/*
WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement. 

*/

#include<stdio.h>
main()
{
	int n1, n2, choice;
	
	printf("\n\n\t Input Number1 : ");
	scanf("%d",&n1);
	printf("\n\n\t Input Number2 : ");
	scanf("%d",&n2);
	
	printf("\n\n\t ...........................");
	printf("\n\n\t Press 1 for Addition ");
	printf("\n\n\t Press 2 for Subtraction ");
	printf("\n\n\t Press 3 for Multiplication ");
	printf("\n\n\t Press 4 for Division ");
	printf("\n\n\t Press 5 for Modulo");
	printf("\n\n\t ...........................");
	
	printf("\n\n Enter your choice for the operation  : ");
	scanf("%d",&choice);
	
	if(choice==1)
		printf("\n\n\t Addition : %d + %d = %d",n1,n2, n1+n2);
		
	if(choice==2)
		printf("\n\n\t Subtraction : %d - %d = %d",n1,n2, n1-n2);
		
	if(choice==3)
		printf("\n\n\t Multiplication : %d * %d = %d",n1,n2, n1*n2);
		
	if(choice==4)
		printf("\n\n\t Division : %d / %d = %d",n1,n2, n1/n2);
		
	if(choice==5)
		printf("\n\n\t Modulo : %d % %d = %d",n1,n2, n1%n2);
	
}
