#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << endl

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    vector<int> a;
    for (size_t i = 0; i < n; i++)
    {
        int x; cin >>x; a.push_back(x);
    }
    sort(a.begin(), a.end());

    int ans=1;
    for(auto i : a){
        if(i >= ans)
            ans++;
    }
    cout << ans-1 << endl;
    
    return 0;
}
