#pragma GCC optimize("O3")
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
//#pragma GCC target("sse4")

 #include<bits/stdc++.h>
 using namespace std;
 #define MOD 1000000007
 #define pb push_back
 typedef long long ll;
 typedef vector<int> vi;
 #define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//max light up

    void solve()
 {
  ll p,a,b,c,x,y;
  cin>>p>>a>>b>>c>>x>>y;
  ll anar=x*a+b;
  ll ch =y*a+c;
  cout<<p/min(anar,ch)<<endl;
 }


 int main()
 {
  fast_io;

   ll t;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
 }
