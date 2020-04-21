/*Given an integer array, find the contiguous subarray(containing at least one number) which has the largest sum and return its sum
Input : [-2,1,-3,4,-1,2,1,-5,4]
Output : 6
Explanation : [4,-1,2,1] has the largest sum=6
*/
#include<stdio.h>
int main()
{
	int *input_array;
	int size,max,cur_max,i;
	printf("Enter the size of the array\t");
	scanf("%d",&size);
	input_array=(int *)malloc(size*sizeof(int));
	printf("Enter the elements\t");
	for(i=0;i<size;i++)
	{		
		scanf("%d",&input_array[i]);
	}
	max=0;
	cur_max=0;
	for(i=1;i<=size;i++)
	{
		cur_max=cur_max+input_array[i];		
		if(cur_max>max)
		{
			max=cur_max;
		}
		if(cur_max<0)
		{
			cur_max=0;
		}	
	}
	printf("The answer is \t%d",max);

	
}
