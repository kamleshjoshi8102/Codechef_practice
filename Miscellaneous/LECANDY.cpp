/*

 	 Problem Statement : Little Elephant and Candies
 	 Link : https://www.codechef.com/problems/LECANDY
 	 Score : accepted

 */

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >>test;
	for(int i=0;i<test;i++)
	{
		int N,C;
		cin>>N>>C;
		int A[N];
		for(int x =0;x<N;x++)
		{
			cin>>A[x];
			C = C - A[x];
		}
		if(C>=0)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
	}
	return 0;
}
