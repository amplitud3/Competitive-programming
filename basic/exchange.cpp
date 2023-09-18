/*
platform: codeforces

2022-2023 ICPC, NERC, Southern and Volga Russian Regional Contest (Online Mirror, ICPC Rules, Preferably Teams)

E. Exchange

Monocarp is playing a MMORPG. There are two commonly used types of currency in this MMORPG — gold coins 
and silver coins. Monocarp wants to buy a new weapon for his character, and that weapon costs n

silver coins. Unfortunately, right now, Monocarp has no coins at all.

Monocarp can earn gold coins by completing quests in the game. Each quest yields exactly one gold coin. 
Monocarp can also exchange coins via the in-game trading system. Monocarp has spent days analyzing the 
in-game economy; he came to the following conclusion: it is possible to sell one gold coin for a
silver coins (i. e. Monocarp can lose one gold coin to gain a silver coins), or buy one gold coin 
for b silver coins (i. e. Monocarp can lose b

silver coins to gain one gold coin).

Now Monocarp wants to calculate the minimum number of quests that he has to complete
 in order to have at least n
silver coins after some abuse of the in-game economy. 

Note that Monocarp can perform exchanges of both types (selling and buying gold coins for silver coins) 
any number of times.


*/


#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
int t;
int k;
int n,a,b;
 
cin>>t;
 
while(t--)
{
	cin>>n>>a>>b;
	if(a>b)
	{
		k=1;
		
	}
	else
	{
		k=(n+a-1)/a;
 
	}
 
	cout<<k<<"\n";
 
 
}   
 
 
 
   return 0;
 
}