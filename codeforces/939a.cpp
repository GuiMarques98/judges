#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl
#define IOS ios::sync_with_stdio(false); cin.tie(NULL)


int main(int argc, char const *argv[])
{
    IOS;
    int n;cin>>n;
    vector<int> a(n+1);
    for (size_t i = 1; i <= n; i++) {
        cin>>a[i];
    }
    bool ans=false;
    for (size_t i = 1; i <= n; i++) {
        auto b=a[i];
        auto c=a[b];
        if(a[c] == i){
            ans = true;
            break;
        }
    }
    cout << ((ans)?"YES":"NO") << endl;
    
    
    return 0;
}
