//global factorial array declaration

const int sz = 2e5 + 5;
int fac[sz];

//calculating (a ^ b) % mod
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

int modInverse(int n , int m) {
	return exp(n , m - 2 , m);
}

int nCr(int n , int r , int m) {
	if (r > n) return 0;

	if (r == 0) return 1;

	return (fac[n] * modInverse(fac[r] , m) % m * modInverse(fac[n - r] , m) % m) % m;
}

void precompute() {
	fac[0] = 1;
	for (int i = 1; i < sz; i++) {
		fac[i] = (fac[i - 1] * i) % mod;
	}
}
