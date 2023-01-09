#include<bits/stdc++.h>

using namespace std;

#define int long long

typedef vector<int> v;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define FastIO                      \
    ios::sync_with_stdio(false);    \
    cin.tie(0);                     \
    cout.tie(0);                    \

int check(int n)
{
    int t=1;
    for(int i=2; i<=sqrt(n); i++)
    {
        int flg{};
        
        if (n%i==0)
        {
            while(n%i==0)n/=i,flg++;
        }
        t*=(flg+1);
    }
    if (n>1){
        t*=2;
    }
    
    return t;
}

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;


int32_t main()
{
    FastIO;
    int N;
    cin>>N;
    int t = 1;
    while (N--)
    {
        int n;
        cin>>n;
        vector<int>v;
        vector<double>v2;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;

            v.push_back(x);
        }
        double result = -1;
        for(int i=0; i<n; i++){
            v2.push_back(check(v[i]));
        }
        for(int i = 0; i< n; i++){
            result = max(result,v2[i]);
        }


        cout<<fixed<<setprecision(4)<<"Case "<<t<<": "<<result<<endl;
        t++;
    }

    return 0;
}