#include "bits/stdc++.h"
using namespace std;
 
int main()
{
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL); 
        
        long long N = 0, K = 0;
        cin >> N >> K;
 
        vector<long long> arr(N);
        for(int i=0; i<N; i++) cin >> arr[i];
 
        long long ans = 0, sum = arr[0];
 
        long long i=0, j = 0;
        while(i < N && j < N)
        {
                if(sum == K) 
                {
                        ans++;
                        sum -= arr[i];
                        i++;
                }
                else if(sum < K) 
                {
                        j++;
                        sum += arr[j];
                }
                else 
                {
                        sum -= arr[i];
                        i++;
                }
        }
        cout << ans;
 
	return 0;
}
