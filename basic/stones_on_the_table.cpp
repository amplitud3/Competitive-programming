/*
A. Stones on the Table
Codeforces Round 163 (Div. 2)
There are n stones on the table in a row, each of them can be red, green or blue.
Count the minimum number of stones to take from the table so that any two neighboring stones
had different colors. Stones in a row are considered neighboring if there are no other stones between them.


*/

    #include<iostream>
     
    using namespace std;
     
    int main()
    {
    	int n=0;
    	string str;
    	int count=0;
    	cin>>n>>str;
     
    	for(int i=0;i<n;i++)
    	{
    		if(str[i] == str[i + 1])
    		{
    			count++;
     
    		}
    	}
     
     
    	cout<<count;
    return 0;
    }