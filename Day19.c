/*Search in Rotated Sorted Array
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2])

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Input : nums =[4,5,6,7,0,1,2], target =0
Ouput : 4

Input : nums =[4,5,6,7,0,1,2], target = 3
Output : -1
*/
#include<stdio.h>
int main()
{
	int *input_array;
	int size,target,index=-1,i;
	printf("Enter the size\t");
	scanf("%d",&size);
	printf("Enter the target value\t");	
	scanf("%d",&target);
	input_array=(int *)malloc(size*sizeof(int));
	printf("Enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&input_array[i]);
		if(target==input_array[i])
		{
			index=i;	
		}
	}
	printf("\n%d",index);
	free(input_array);
}
