/*

B. Broken Keyboard

2022-2023 ICPC, NERC, Southern and Volga Russian Regional Contest (Online Mirror, ICPC Rules, Preferably Teams)

Recently, Mishka started noticing that his keyboard malfunctions — maybe it's because he was playing rhythm games too much.
Empirically, Mishka has found out that every other time he presses a key, it is registered as if the key was pressed twice.
For example, if Mishka types text, the first time he presses a key, exactly one letter is printed; the second time he presses 
a key, two same letters are printed; the third time he presses a key, one letter is printed; the fourth time he presses a key,
two same letters are printed, and so on. Note that the number of times a key was pressed is counted for the whole keyboard, not
for each key separately. For example, if Mishka tries to type the word osu, it will be printed on the screen as ossu.

You are given a word consisting of n
lowercase Latin letters. You have to determine if it can be printed on Mishka's keyboard or not. You may assume that Mishka 
cannot delete letters from the word, and every time he presses a key, the new letter (or letters) is appended to the end of 
the word.


*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
 
	int t;
	int n;
	string s;
	int flag;
	cin>>t;
 
	while(t--)
	{
		cin>>n;
		cin>>s;
		flag=0;
 
		for(int i=1;i<n;i=i+3)
		{
 
 
			if(s[i]!=s[i+1])
			{
				flag=1;
				break;
			}
		}
 
		if(flag==0)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";
 
 
 
	}   
 
 
 
   return 0;
}