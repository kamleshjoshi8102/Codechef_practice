/*

 	 Problem Statement : Packaging Cupcakes
 	 Link : https://www.codechef.com/problems/MUFFINS3
 	 Score : accepted

 */
#include<iostream>
#include<limits>
using namespace std;

int main()
{
	int test;
	cin >> test;
	for(int i=0; i<test;i++)
	{
		int cupcakes,package_size=0,leftover=0;
		cin>> cupcakes;
		if(cupcakes == 1)
			package_size =1;
		else if (cupcakes ==2)
			package_size = 2;
		else
		{
			for(int p = int(cupcakes/2);p<cupcakes;p++)
			{
				int remaining = cupcakes%p;
				if(remaining > leftover)
				{
					package_size = p;
					leftover = remaining;
				}
			}
		}
		cout << package_size<<'\n';
	}
	return 0;
}
