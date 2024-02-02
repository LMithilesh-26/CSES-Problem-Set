#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
	ll N;
	cin >> N;
	
	vector<ll> V(N); 
	ll moves = 0;
	
	for(int i=0; i<N; i++) cin >> V[i]; 
	
	for(int i=1; i<N; ++i)
	{
		if(V[i-1] > V[i])
		{
			moves += (V[i-1] - V[i]);
			V[i] = V[i-1];
		}
	}	
	cout << moves;
}
int main()
{	
	solve();
	
	return 0;
} 
