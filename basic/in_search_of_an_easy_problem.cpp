/*
platform : codeforces
A. In Search of an Easy Problem
Technocup 2019 - Elimination Round 1

When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible.
 This time the coordinator had chosen some problem and asked n

people about their opinions. Each person answered whether this problem is easy or hard.

If at least one of these n
people has answered that the problem is hard, the coordinator decides to change the problem.
 For the given responses, check if the problem is easy enough.
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	int n;
	cin>>n;
	int flag=0;
 
	int arr[101];
 
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
 
		if(arr[i]==1)
		{
			flag=1;
		}
 
	}   
 
	if(flag==1)
		cout<<"HARD\n";
	else
		cout<<"EASY\n";
 
   return 0;
}