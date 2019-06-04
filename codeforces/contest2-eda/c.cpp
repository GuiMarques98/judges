#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << endl
string ans[100010];

int main(int argc, char const *argv[])
{
    int n; cin>>n;
    vector<pair<int, int>> a;
    for (size_t i = 0; i < n; i++) {
        int x; cin>>x;a.push_back({x, i+1});
    }

    sort(a.rbegin(), a.rend());
    for(int i=0; i<n; ++i){
        ans[i] = "";
    }
    int aux=1;
    ans[a[0].second] = to_string(a[0].first);
    for (size_t i = 1, aux=a[0].second; i < n; i++) {
        if(a[i].second > aux){
            aux = a[i].second;
            ans[aux] = to_string(a[i].first);
        } else {
            ans[aux] += " " +to_string(a[i].first);
        }
    }
    for(int i=1; i<=n; ++i) {
        cout << ans[i] << endl;
    }    
}