/*
WAP to check if the given year is a leap year or not.
----------------------------------------------------------
A leap year comes once in four years, in which February month has 29 days. 
With this additional day in February, a year becomes a Leap year.

examples - 1600, 1988, 1992, 1996, and 2000.
Although 1700, 1800, and 1900 are century years, not leap years.

Below conditions are used to check that year is a leap year or not.
      -Year must be divisible by 4
      -Year is divisible by 400 and not divisible by 100.

*/

#include<stdio.h>  
main() 
{  
    int year;  
    
	printf("Enter a year: ");  
    scanf("%d", &year);  
    
    if((  (year % 4 == 0) && (year % 100!= 0)  )    || (year%400 == 0)  )
    {  
        printf("\n\n\t %d is a leap year...", year);  
    } 
	else 
	{  
        printf("\n\n\t %d is not a leap year..", year);  
    }  
}

