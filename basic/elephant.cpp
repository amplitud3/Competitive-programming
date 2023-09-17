/*


platform:codeforces

Codeforces Round 340 (Div. 2)

A. Elephant

An elephant decided to visit his friend. 
It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x > 0) 
of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine,
 what is the minimum number of steps he need to make in order to get to his friend's house.
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
   
	int n;
	cin>>n;
	int count=0;
 
	while(n>0)
	{
		if(n>=5)
		{
			count++;
			n=n-5;
 
		}
		else if(n>=4)
		{
			count++;
			n=n-4;
 
		}
		else if(n>=3)
		{
			count++;
			n=n-3;
		}
		else if(n>=2)
		{
			count++;
			n=n-2;
		}
		else if(n>=1)
		{
			count++;
			n=n-1;
		}
	}
 
	cout<<count<<"\n";
	
   return 0;
}