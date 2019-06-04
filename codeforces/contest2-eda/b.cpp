#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << endl

int main(int argc, char const *argv[])
{
    int n, t, c; cin >>n>>t>>c;

    vector<int> a;

    for (size_t i = 0; i < n; i++)
    {
        int x; cin >>x; a.push_back(x);
    }

    // sort(a.begin(), a.end());
    int ans=0, aux=0;
    for (size_t i = 0; i < n; i++) {
        if(a[i]<=t){
            aux++;
            if(aux==c){
                ans++;
                aux=c-1;
            }
        }else {
            aux=0;
        }
    }

    // for(auto i: a){
    //     if(i <= t)
    //         ans.push_back(i);
    // }


    cout << ans << endl;
    
    
    return 0;
}
/*
11 4 2
2 2 0 7 3 2 2 4 9 1 4

*/
