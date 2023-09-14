/*
A. Helpful Maths

Codeforces Round 197 (Div. 2)

Xenia the beginner mathematician is a third year student at elementary school.
 She is now learning the addition operation.

The teacher has written down the sum of multiple numbers. 
Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

You've got the sum that was written on the board.
 Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.


*/

#include<bits/stdc++.h>
using namespace std;
 
 
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b=temp;
}
 
int main()
{
 
	string str;
	cin>>str;
	
	int k;
	int j=0;
	int num[100];
	for(int i=0;i<str.length();i++)
	{
		if(str[i]!='+')
	        {
		k= str[i]-'0';
 
		num[j]= k;
		j++;
 
		}	
	}
 

	
 
	for(int x=0;x<j;x++)
	{
		for(int y=0;y<j-1;y++)
		{
			if(num[y]>num[y+1])
			{
				swap(&num[y],&num[y+1]);
 
			}
		}
	}
 
 
	for(int i=0;i<j;i++)
	{
		if(i==j-1)
		{
		
			printf("%d",num[i]);
			break;
		}
 
		printf("%d+",num[i]);
	}
 
 
	return 0;
