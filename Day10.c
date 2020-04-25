/*Design a stack that supports push,pop,top and retrieving the minimum element in constant time.

push(x) -- Push element X onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element
getMin() -- Retrieve the minimum element in the stack.
m-minstack,p-push,d=pop,g-getMin,t=top
Give 99 for []

Input 
["m","p","p","p","g","d","t","g"]
[[],[-2],[0],[-3],[],[],[],[]]

Output 
[null,null,null,null,-3,null,0,-2]
*/
#include<stdio.h>
int stack[100],top=-1;
void push(int x);
void pop();
int top1();
int getmin();
int main()
{
	char operations[8]={'m','p','p','p','g','d','t','g'};
	int size=8,i;	
	int *input_values,*output;
	printf("Enter the values\n");
	input_values=(int *)malloc(size*sizeof(int));
	output=(int *)malloc(size*sizeof(int));
	for(i=0;i<size;i++)
	{
		scanf("%d",&input_values[i]);	
	}
		for(i=0;i<size;i++)
		{
			switch(operations[i])
			{
				case 'm':
					{
					output[i]=-999;
					break;
					}	
				case 'p':
					{
					if(input_values[i]!=' ')
					{
						output[i]=-999;
						push(input_values[i]);
					}
					break;
					}
				case 'd':
					{
					output[i]=-999;
					pop();
					break;
					}
				case 't':
					{
					output[i]=top1();
					break;
					}
				case 'g':
					{
					output[i]=getmin();
					break;
					}
			}			
		}
		printf("The output(-999 represents NULL)\n");
		for(i=0;i<size;i++)
		{
			printf("%d\t",output[i]);
		}
}
void push(int x)
{
	if(top==-1)
	{
		top=0;
		stack[top]=x;
	}
	else{
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top!=-1)
	{
	top--;
	}
}
int top1()
{
	if(top!=-1)
	{
		return stack[top];	
	}

}
int getmin()
{
	int i,min=stack[top];
	for(i=top-1;i>=0;i--)
	{
		if(stack[i]<min)
		{
			min=stack[i];	
		}	
	}
	return min;
	
}
