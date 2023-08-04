/**
 *  author:  arthamin
**/
#include <bits/stdc++.h>
using namespace std;
  

#define PB push_back
#define PP pop_back
#define sub substr
#define V vector
#define F first
#define S second
#define ins insert
#define setprec(x,y) setprecision(x) << fixed << y
#define len(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define make_unique(x) sort(all(x)), x.erase(unique(all(x)), x.end())
#define speed ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef string str;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef vector <pair<int,int>> vip;
typedef vector <pair<ll,ll>> vill;
typedef set <int> seti;
typedef set <ll> setll;
typedef map <int,int> mapi;
typedef map <ll,ll> mapll;
typedef multiset <int,int> mset;
typedef set <int> seti;
typedef set <ll> setll;
typedef vector <long double> vld;
 
 
const ld pi = 3.141592653589793;
 
 
void maxi(ll a, ll b, ll c)
{
    cout << max(c, max(a,b)) << "\n";
}
 
 
int gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}


int countSubs(const std::string& str, const std::string& sub)
{
    if (sub.length() == 0) return 0;
    int count = 0;
    for (size_t offset = str.find(sub); offset != std::string::npos;
     offset = str.find(sub, offset + sub.length()))
    {
        ++count;
    }
    return count;
}


int sum(vi &a)
{
    int s = 0;for(int i = 0; i < len(a);i++) {s += a[i];} return s;
}


int prod(vi &a)
{
    int p = 1;for(int i = 0; i < len(a); i++) {p *= a[i];} return p;
}


int in(vi &a,int x)
{
    for(int i = 0; i < len(a); i++) {if(a[i] == x) return i;} return -1;
}


void solve()
{


    

    


}


int main()
{
    speed;

    int t;
    cin >> t;


    while(t--) {
        solve();
    }

    

    return 0;
}

