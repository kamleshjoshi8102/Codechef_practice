/*
 
    Problem Statement : HAPPY EMPLOYEE
    Link : https://www.codechef.com/CEFT2020/problems/MAKEHAPP
    Score : accepted
 
*/
#include<iostream>
using namespace std;

int main()
{
    long test;
    cin>>test;
    while(test--)
    {
        long N,Q;
        cin>>N>>Q;
        long salary[N] = {};
        long total_salary = 0;
        while(Q--)
        {
            long l,r,V;
            cin>>l>>r>>V;
            total_salary += (((r+1)-l)*V);
        }
        
        cout<<total_salary<<"\n";

    }
    return 0;
}