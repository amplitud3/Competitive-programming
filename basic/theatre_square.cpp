/*

A. Theatre Square
Codeforces Beta Round 1

Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters.
 On the occasion of the city's anniversary, a decision was taken to pave the Square with square
  granite flagstones. Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the 
surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones.
 The sides of flagstones should be parallel to the sides of the Square.
Input


*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	long long int n,m,a;
	cin>>n>>m>>a;
	long long int answer = ((n+a-1)/a)*((m+a-1)/a);
	cout<<answer;
 
 
   return 0;
}