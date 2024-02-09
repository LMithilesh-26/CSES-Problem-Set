#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
	ll N;
	cin >> N;
	
	while(N != 1)
	{
		cout << N << " ";
		if(N % 2 == 0) N /= 2;
		
		else N = (N * 3) + 1;
    }
    cout << 1 << endl;
}
int main()
{	
	solve();

	return 0;
}
