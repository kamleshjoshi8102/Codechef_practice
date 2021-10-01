#include <sstream>
#include <iostream>
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
#include <utility>
#include <queue>
using namespace std;
vector<int> primeFactors(int n)
{
	vector<int> pfact;
	while (n % 2 == 0) {
		pfact.push_back(2);
		n = n / 2;
	}
	int i;
	for ( i = 3; i * i <= n; i += 2) {
		while (n % i == 0) {
			pfact.push_back(i);
			n = n / i;
		}
	}
	if (n > 2) pfact.push_back(n);
	return pfact;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		vector<int> factors = primeFactors(a);
		bool pos = true;
		for (auto i : factors) {
			if (b % i != 0)
				pos = false;
		}

		if (pos) cout << "Yes"<<endl;
		else cout << "No"<<endl;
	}

	return 0;
}
