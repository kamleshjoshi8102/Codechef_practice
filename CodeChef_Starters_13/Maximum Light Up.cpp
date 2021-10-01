#include <iostream>
#include <numeric>
#include <iomanip>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <numeric>
#include <iterator>
#include <bitset>
#include <cstring>
#define ll long long
using namespace std;
#define mod 1000000007
#define vec vector<ll>
#define sort(a) sort(a.begin(),a.end())
#define fast                          \
 ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define rep(i, a, b) for (int i = a; i < b; i++)
   const int dx[4] = { -1, 0, 1, 0};
      const int dy[4] = {0, 1, 0, -1};
      const int MAXC = 1e5;
 bool isPrime(int n)
{
  
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
  
void solve()
{
   ll p,a,b,c,x,y;
   cin>>p>>a>>b>>c>>x>>y;
   ll mini=min(b+a*x,c+a*y);
   cout<<p/mini<<endl;
}
//   cout<<"Case#"<<t<<" :"<<sum<<endl;
//cout<<cnt<<endl;-
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int t;
    t = 1;
 cin >> t;
  while(t--)
        solve();

    return 0;
}
