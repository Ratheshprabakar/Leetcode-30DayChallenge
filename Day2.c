/*Write an algorithm to determine if a number n is "happy"
A happy number is  a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of it's digits, and repeat the process until the number equals 1(Where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers and process ends in 4 are not happy numbers.

Return true if n is a happy number, and false if not.
*/
#include<stdio.h>
int main()
{
	int number,value,sum=0;
	printf("Enter a number\t");
	scanf("%d",&number);
	while(number>0)
	{
		value=number%10;
		sum+=(value*value);
		number/=10;
		if(number==0)
		{
			if(sum==1)	
			{
				printf("True");
				break;
			}
			else if(sum==4)
			{
				printf("False");
				break;	
			}	
			else
			{
				number=sum;
				sum=0;	
			}
		}	
	}	
}
