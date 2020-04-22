/*Given two strings S and T,return if they are equal when both are typed into empty text editors. # means a backspace character.

Note that after backspacing an empty text, the text will continue empty.
Input : S="ab#c" , T="ab#c"
Output : True
Explanation : Both S and T become "ac"

Input : S="ab##" , T="c#d#"
Output : True
Explanation : Both S and T become ""

Input : S= "a##c", T="#a#c"
Output : True
Explanation : Both S and T become "c"

Input : S="######", T="ab#c"
Output: False
Explanation : S becomes empty while T becomes "ac"

Input S="a#c", T="b"
Output : False
Explanation : S becomes "c" while T becomes "b".

Note : S and T only contains lowercase letters and '#' character. 
*/


#include<stdio.h>
int stack1[100],stack2[100];
int top1=-1,top2=-1;
void push1(int x);
void pop1(void);
void push2(int x);
void pop2(void);
int main()
{
	int s1[100],s2[100];
	int result=0,i;
	printf("Enter the first string\t");
	gets(s1);
	printf("Enter the second string\t");
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='a' && s1[i]<='z')
		{
			push1(s1[i]);		
		}
		else
		{
			pop1();	
		}	
	}
	for(i=0;s2[i]!='\0';i++)
	{
		if(s2[i]>='a' && s2[i]<='z')
		{
			push2(s2[i]);		
		}
		else
		{
			pop2();	
		}	
	}
	if(top1==top2)
	{
	while(top1==-1 && top2==-1)
	{
		if(stack1[top1]!=stack2[top2])
		{
			result=0;
			break;	
		}
		top1--;
		top2--;
		result=1;
		
	}
	(result==1)?printf("True"):printf("False");
	}
	else
		printf("False");
		
	
}
void push1(int x)
{
	if(top1==-1)
	{	
		top1=0;
		stack1[top1]=x;
	}
	else
	{
		top1++;
		stack1[top1]=x;
	}

}
void push2(int x)
{
	if(top2==-1)
	{	
		top2=0;
		stack2[top2]=x;
	}
	else
	{
		top2++;
		stack2[top2]=x;
	}

}
void pop1()
{
	if(top1!=-1)
	{
		top1--;
	}
}
void pop2()
{
	if(top2!=-1)
	{
		top2--;
	}
}
