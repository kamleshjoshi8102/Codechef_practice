/*

 	 Problem Statement : Finding Square Roots
 	 Link : https://www.codechef.com/problems/FSQRT
 	 Score : accepted

 */
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int test;
	cin >> test;
	for(int i=0;i<test;i++)
	{
		int number;
		cin >> number;
		cout<< int(sqrt(number));
	}
}
