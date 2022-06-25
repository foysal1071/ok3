///Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.

#include<stdio.h>
int main()
{
    int i,hour, extra;
    for(i = 1 ; i <= 10 ; i++) 
    {	
     printf("\n");
	printf("Enter the working hour of the employ : ");
	scanf("%d", &hour);
	
	if(hour>40)
	{
		extra = (hour - 40)*12;
		printf("\n%d Rs. is the overtime pay of employee\n", extra);
	}
	else
		printf("\nThis employ has not done overtime.\n");
  }
 return 0;
     }
