#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl
#define IOS ios::sync_with_stdio(false); cin.tie(NULL)


int main(int argc, char const *argv[])
{
    IOS;
    int n; cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        long long int x, ans=0;cin>>x;
        while(x!=1){
            if(x%2 == 0){
                ans++;
                x /= 2;
            } else if(x%3 == 0){
                x = (x*2)/3;
                ans++;
            } else if(x%5 == 0) {
                x = (x*4)/5;
                ans++;
            } else{
                cout << -1 << endl;
                break;
            }
        }
        if(x==1)
            cout << ans << endl;
    }
    
    return 0;
}
