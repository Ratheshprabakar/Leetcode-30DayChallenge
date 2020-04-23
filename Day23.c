/*Given a range[m,n] where 0<=m<=n<=2147483647, return the bitwise AND of all numbers in this range, inclusive.*/
#include<stdio.h>
int main()
{
	int start_range,end_range,i,result;
	printf("Enter the start and End value\t");
	scanf("%d\t%d",&start_range,&end_range);
	result=start_range;
	for(i=start_range+1;i<=end_range;i++)
	{
		result&=i;
	}
	printf("The Bitwise AND of Numbers range is \t%d",result);
}
