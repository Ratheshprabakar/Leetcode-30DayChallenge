/*We have a collection of stones, each stone has a positive integer weight.

Each turn, we choose the two heaviest stones and smash them together.  Suppose the stones have weights x and y with x <= y.  The result of this smash is:

    If x == y, both stones are totally destroyed;
    If x != y, the stone of weight x is totally destroyed, and the stone of weight y has new weight y-x.

At the end, there is at most 1 stone left.  Return the weight of this stone (or 0 if there are no stones left.)

Example 1:
Input: [2,7,4,1,8,1]
Output: 1
Explanation: 
We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,
we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,
we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,
we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of last stone.
*/
#include<stdio.h>
int main()
{
	int size,i,j,temp,s,count=0,x,y,flag=1,k;
	int *input_array;
	printf("Enter the size\t");
	scanf("%d",&size);
	s=size-1;
	input_array=(int *)malloc(size*sizeof(int));
	printf("Enter the input array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&input_array[i]);
	}
	for(k=0;k<size;k++)
	{	flag=1;
		for(i=size-1;i>=0 && flag;i--)
		{
			flag=0;
			for(j=0;j<=i-1;j++)
			{
				if(input_array[j]>input_array[j+1])
				{
					temp=input_array[j];
					input_array[j]=input_array[j+1];
					input_array[j+1]=temp;	
					flag=1;
				}	
			}
		}
		y=input_array[s-count];
		x=input_array[(s-1)-count];
		if(x==y)
		{
			input_array[s-count]=999;
			input_array[(s-1)-count]=999;
			count =count+2;	
		}	
		else if(x!=y)
		{
			input_array[(s-1)-count]=999;
			input_array[s-count]=y-x;
			count =count+1;
		}
		if(count==size-1 || count ==size)
		{
			(input_array[0]!=999)?printf("%d",input_array[0]):printf("0");
			break;	
		}
	}
	
	free(input_array);
}
