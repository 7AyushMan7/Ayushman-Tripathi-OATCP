#include <iostream>
#include <vector>
using namespace std;

int countWays(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= 6; i++) {
        for (int j = i; j <= n; j++) {
            dp[j] += dp[j - i];
        }
    }
    return dp[n];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int tt
        cin >> tt;
        if (tt<0){
            cout << "Not Possible" << endl;
        }
        else{
            cout << countWays(tt) << endl;
        }   
    }
    return 0;
}
