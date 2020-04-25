/* Given a string containing only three types of characters: '(', ')' and '*', write a function to check whether this string is valid. We define the validity of a string by these rules:

    1.Any left parenthesis '(' must have a corresponding right parenthesis ')'.
    2.Any right parenthesis ')' must have a corresponding left parenthesis '('.
    3.Left parenthesis '(' must go before the corresponding right parenthesis ')'.
    4.'*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string.
    5.An empty string is also valid.

Input : "()"
Output : True

Input : "(*)"
Output : True

Input : "(*))"
Ouput : True

Input : ""
Output : True

Input : "(((*)"
Output : False

*/
#include<stdio.h>
int main()
{
	char input_string[100],i,j;
	printf("Enter the string\t");
	gets(input_string);
	if(input_string==NULL)
	{
		printf("True");
	}
	else
	{
		int low=0,high=0;
		for(i=0;input_string[i]!='\0';i++)
		{
			if(input_string[i]=='(')
			{
				high++;
				low++;
			}	
			else if(input_string[i]==')')
			{
				if(low>0)
				{
					low--;	
				}
				high--;
			}
			else{
				if(low>0)
				{
					low--;		
				}
				high++;
			} 
			if(high<0)
				{
				printf("False");
				break;
				}
		}
		(low==0)?printf("True"):printf("False");
	}


}
