/**
 *  author:  arthamin
**/
#include <bits/stdc++.h>
using namespace std;
  

#define PB push_back
#define vt vector
#define mset multiset
#define mmap multimap
#define V vector
#define bg begin()
#define end end()
#define sub substr
#define len size
#define speed ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef string str;
 
 
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


int sum(V <int> &a)
{
    int s = 0;for(int i = 0; i < (int)a.len();i++) {s += a[i];} return s;
}


int prod(V <int> &a)
{
    int p = 1;for(int i = 0; i < (int)a.len(); i++) {p *= a[i];} return p;
}


int in(V <int> &a,int x)
{
    for(int i = 0; i < (int)a.size(); i++) {if(a[i] == x) return i;} return -1;
}

  
int main()
{
    speed;

    


    return 0;
}

