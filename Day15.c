/*Product of Array Except Self
Given an array nums of n integers where n>1, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Input : [1,2,3,4]
Output : [24,12,8,6]

Constraint : It's guaranteed that the product of the elements of any prefix or suffix of the array(including the whole array)fits in a 32 bit integer. You should solve this with constant space complexity(The output array does not count as extra space).
*/
#include<stdio.h>
int main()
{
	int *input_array,*output_array;
	int size,i,j,product=1;
	printf("Enter number of elements\t");
	scanf("%d",&size);
	input_array=(int *)malloc(size*sizeof(int));
	output_array=(int *)malloc(size*sizeof(int));
	printf("Enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&input_array[i]);	
	}
	printf("The Output array \n[");
	for(i=0;i<size;i++)
	{
		product=1;
		for(j=0;j<size;j++)
		{
			if(j!=i)
			{
				product*=input_array[j];		
			}	
		}
		output_array[i]=product;
		printf("%d,",output_array[i]);
	}
	printf("]");
	free(input_array);
	free(output_array);
}
