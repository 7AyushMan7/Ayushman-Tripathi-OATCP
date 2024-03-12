
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int cntWay(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= 6; i++) {
        for (int j = i; j <= n; j++) {
            dp[j] += dp[j - i];
        }
    }
    return dp[n];
}
int main()
{
ll t;
cin>>t;
while(t--){
    int nn;
    cin >> nn;
        if (nn<0){
            cout << "Not Possible" << endl;
        }
        else{
            cout << cntWay(nn) << endl;
        }   
    
}

    return 0;
}
