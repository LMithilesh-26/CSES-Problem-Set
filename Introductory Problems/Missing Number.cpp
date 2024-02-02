#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;

void solve()
{
	ll N;
	cin >> N;
	
	ll input = 0, sum = 0;
	
	for(int i=0; i<N-1; ++i) 
	{
		cin >> input;
		sum += input;
	}
	cout << ((N * (N + 1)) / 2) - sum; 
}
int main()
{	
	solve();
	
	return 0;
}
