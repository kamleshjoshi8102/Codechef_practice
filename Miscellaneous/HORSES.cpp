/*
	 Problem Statement : Racing Horses 
	 Link : https://www.codechef.com/problems/HORSES
	 Score : accepted
*/
#include <iostream>
#include<limits.h>
#include<stdlib.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
	    int N;
	    cin >> N;
	    int S[N];
	    for(int l=0;l<N;l++)
	        cin>>S[l];
	    int difference = INT_MAX;
	    for(int p=0;p<N;p++)
	    {
	        for(int q=p+1;q<N;q++)
	        {
	            if(abs(S[p]-S[q]) < difference)
	                difference = abs(S[p]-S[q]);
	        }
	    }
	    cout<<difference<<'\n';
	}
	return 0;
}
