#include <bits/stdc++.h>
#define N 10005
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
ll ans=1;
pii ps[N];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,im=0;
    cin>>n;
    for (int i=0;i<n;im++,i++)   {
        cin>>ps[im].first>>ps[im].second;
        if (ps[im].first==ps[im].second)  im--;
    }
    if (im==0||im==1)   {
        cout<<1+min(ps[0].first,ps[0].second)<<endl;
        return 0;
    }
    for (int i=1;i<n;i++)   {
        int prea=ps[i-1].first,preb=ps[i-1].second;
        int a=ps[i].first,b=ps[i].second;
        if (a>b)    {
            if (b>=prea)    ans+=a-b+1;
            else    {
//                if (preb<prea)  ;
//                else    ans+=b-preb+1;
            }
        }
        else    {
            if (a>=preb)    ans+=b-a+1;
            else {
//                if (prea<preb)  ;
//                else    ans+=
            }
        }
        cout<<"i = "<<i<<' '<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}