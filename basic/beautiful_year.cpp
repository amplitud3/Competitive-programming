/*
Codeforces Round 166 (Div. 2)
A. Beautiful Year

It seems like the year of 2013 came only yesterday. 
Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, 
find the minimum year number which is strictly larger than the given one and has only distinct digits.


*/

#include <bits/stdc++.h>
using namespace std;
 
bool checkBeautifulYear(int &year)
{
	set<int> arr;
 
	int val,newyear;
	newyear=year;
 
	for(int j=0;j<4;j++)
   		{
   		val=newyear%10;
   		newyear=newyear/10;
   		arr.insert(val);
   		}
 
   		if(arr.size()==4)
   			return true;
   		else
   			return false;
 
 
}
 
int main() {
   
 
	int year;
	cin>>year;
 
 
	while(1)
	{
 
		year++;
 
	if(checkBeautifulYear(year))
	{	
		cout<<year;
		break;
	}
 
 
 
	}
   return 0;
}