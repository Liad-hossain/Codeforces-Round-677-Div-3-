//Author:MD> Liad Hossain
//KUET ECE 2K18

#include <bits/stdc++.h>
//using namespace std;
//#include<ext/pb_ds/assoc_container.hpp>
#define lld long long int
#define ulld unsigned long long int
#define vl vector<lld>
#define vll vector<pair<lld, lld>>
#define SIZE 5 * 1000000 + 10
#define ff first
#define ss second
#define pf push_front
#define pb push_back
#define eb emplace_back
#define pof pop_front
#define pob pop_back
#define mp make_pair
#define fbo find_by_order
#define ofk order_of_key
#define fo(i, a, b) for (lld i = a; i <= b; i++)
#define fl(j, c, d) for (lld j = c; j <= d; j++)
#define FOR(i, n) for (lld i = 0; i < n; i++)
#define F0R(j, n) for (lld j = 0; j < n; j++)
#define ROF(i, n) for (lld i = n - 1; i >= 0; i--)
#define all(v) v.begin(),v.end()
#define lb lower_bound
#define ub upper_bound
#define er equal_range
#define rs random_shuffle
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define mod 1000000007
#define setbit __builtin_popcount
#define elif else if
#define pi 2 * acos(0.0)
#define inf 9000000000000000000
#define T            \
    int t;           \
    scanf("%d", &t); \
    while (t--)
using namespace std;
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>indexed_set;
 
 
int main()
{
    T
    {
        map<lld,lld>gang;
        lld n,i,mini=inf;
        cin>>n;
        lld a[n];
        FOR(i,n)
        {
            cin>>a[i];
            gang[a[i]]++;
        }
 
        if(gang.size()==1)no;
        else
        {
            yes;
            lld val;
            for(auto elm:gang)
            {
                if(elm.ss<mini)
                {
                    val=elm.ff;
                    mini=elm.ss;
                }
            }
 
            lld pos;
            lld posi;
            FOR(i,n)
            {
                if(a[i]==val)pos=i+1;
                else
                {
                    posi=i+1;
                } 
            }
 
            FOR(i,n)
            {
                if(a[i]!=val)
                {
                    cout<<pos<<" "<<i+1<<endl;
                }
                elif(i+1!=pos)
                {
                    cout<<posi<<" "<<i+1<<endl;
                }
            }
        }
        
    }
    cerr << "time taken : " << (float)clock() / (float)CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
