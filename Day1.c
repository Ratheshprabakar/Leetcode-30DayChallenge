/*Given a non-empty array of integers, every element appears twice except for one. Find that single one.
Note : 
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
Input : [2,2,1]
Output : 1

Input : [4,1,2,1,2]
Output : 4

Input : [1,1,2,2,3,3,9]
Output : 9
*/
#include<stdio.h>
int main()
{
	int *input_array;
	int size,i,flag=1,j,value,temp;
	printf("Enter the size of the array\t");
	scanf("%d",&size);
	input_array=(int *)malloc(size* sizeof(int));
	printf("Enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&input_array[i]);	
	}
	for(j=size-1;j>=0 && flag; j--)
	{	
		flag=0;
		for(i=0;i<=j-1;i++)
		{
			if(input_array[i]>input_array[i+1])	
			{
				temp=input_array[i];
				input_array[i]=input_array[i+1];
				input_array[i+1]=temp;	
				flag=1;
			}	
		}	
	}
	for(i=0;i<size;i+=2)
	{
		if(input_array[i]!=input_array[i+1])
		{	

			value=input_array[i];	
			break;
		}	
	}
	printf("%d",value);	
}
