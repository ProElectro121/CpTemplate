/*--------------------------------
* Author -> Puspendra yadav      *
* Expert before 5th sem          *
---------------------------------*/

#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------Pbds-------------------------------------------------------------------------*/

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define idx(x)        find_by_order(x)
#define less_then(x)  order_of_key(x)

template<class T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;


/*-----------------------------------------------------Defines----------------------------------------------------------------------------*/

#define int long long int
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define mod 1000000007

/*----------------------------------------------------Debugging-----------------------------------------------------------------------------*/

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(float t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


/*--------------------------------------------------Struggle starts----------------------------------------------------------------------*/



void solve() {

}


main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;

	/*
	    Sorting using cmp --> return boolen in which order
	    order you want to Sort

	    using pbds

	    using only less --> normal set
	    using less_equal --> lower_bound gives result like upper
	                         bound in multiset and vice versa

	    eg ->  for in desecnding order --> return (a > b);
	*/
}
