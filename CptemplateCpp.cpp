#include<bits/stdc++.h>
using namespace std;


#define int long long int
#define endl '\n'
#define all(a) (a).begin(),(a).end()

int gcd(int a, int b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}

int exp(int a , int b , int M) {
    int ans = 1;
    while (b > 0) {
        if ((b & 1)) {
            ans = (ans * 1ll * a) % M;
        }
        a = (a * 1ll * a) % M;
        b =  (b >> 1);
    }
    return ans;
}

void solve() {

}


main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {        
      solve();
    }
    return 0;
}
