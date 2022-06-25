//Write a program to add first seven terms of the following series using a for loop: 1/1! + 2/2! + 3/3! + .............

#include<stdio.h>
int main()  
{  
    int num = 1, count, limit;  
    float sum = 0.0, fact;  
  
    printf("Enter the number of terms\n");  
    scanf("%d", &limit);  
  
    while(num <= limit)  
    {  
        fact = 1;  
        for(count = 1; count <= num; count++)  
        {  
            fact = fact * count;  
        }  
  
        sum = sum + (num / fact);  
  
        num++;  
    }  
  
    printf("Sum of %d terms of series is %f\n", limit, sum);  
  
    return 0;  
}  
