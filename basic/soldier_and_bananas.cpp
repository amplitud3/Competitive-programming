   /*

    A. Soldier and Bananas
    Codeforces Round 304 (Div. 2)
    A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana,
    2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).

    He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?


   */


    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
     
     
    	typedef long long int ll;
     
    	ll k,n,w;
     
    	cin>>k>>n>>w;
     
     
    	ll sum=0;
    	ll v=1;
    	
    	for(int i=1;i<=w;i++)
    	{
    		v=i*k;
    		sum=sum+v;
    		
    	}
     
     
    	ll bm;
     
    	ll o;
    	o=sum-n;
     
    	if(n>sum)
    		bm=0;
    	else
    		bm=o;
     
     
    	cout<<bm<<"\n";
     
     
    	return 0;
    }