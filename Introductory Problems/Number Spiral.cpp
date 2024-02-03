#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
        ll row, col;
        cin >> row >> col;

        if(row == col) cout << (row * col) - row + 1;

        else
        {
                ll maxi = max(row, col);
                ll diagonal = (maxi * maxi) - maxi + 1;

                if(maxi % 2)
                {
                        if(row < col) cout << diagonal + (col - row);

                        else cout << diagonal - (row - col);
                }
                else
                {
                        if(row < col) cout << diagonal - (col - row);

                        else cout << diagonal + (row - col);
                }
        }        
        cout << "\n";
}
int main()
{
        ll tc;
        cin >> tc;

        while(tc--)
        {
                solve();
        }
	
	return 0;
}
