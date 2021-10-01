/*
 
    Problem Statement : Smart Phone
    Link : https://www.codechef.com/ZCOPRAC/problems/ZCO14003
    Score : accepted
 
*/

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector <long long> prices;
    for(int i=0;i<N;i++)
    {
        int a;
        cin>>a;
        prices.push_back(a);
    }
    vector <long long> profit;
    sort(prices.begin(),prices.end());
    int num_products = N;
    for(int i=0;i<N;i++)
    {
        int current_profit = prices[i]*num_products;
        profit.push_back(current_profit);
        num_products --;
    }
    cout<<*max_element(profit.begin(),profit.end());
    return 0;
}