#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl
#define IOS ios::sync_with_stdio(false); cin.tie(NULL)


int main(int argc, char const *argv[])
{
    IOS;
    int n; cin>>n;
    int a[n], ans=0, aux=n;
    for (size_t i = 0; i < n; i++) {
        cin >> a[i];
        if(i && a[i-1] == a[i]){
            ans++;
            n--;
            i--;
        }
    }
    if(n<6){
        cout << aux << endl;
        return 0;
    }

    if(n>1 && a[n-1] != a[n-2] && a[n-2]>a[n-1]){
        ans++;
        n--;
    }
    n = (n-ans);
    if(n%6){
        ans += n%6;
    }
    cout << ans << endl;

    
    return 0;
}
