#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl
#define IOS ios::sync_with_stdio(false); cin.tie(NULL)
int ans[2];

int main(int argc, char const *argv[])
{
    IOS;
    int n;cin>>n;
    for (size_t i = 0; i < n; i++) {
        ans[0] = ans[1] = ans[2] = 0;
        int x;cin>>x;
        int ans1=0;
        for (size_t j = 0; j < x; j++){
            long long int k; cin>>k;
            ans[k%3]++;
        }
        ans1=ans[0];
        if(ans[1] == ans[2]){
            ans1 += ans[2];
        }else if(ans[1] > ans[2]){
            ans1 += ans[2];
            ans1 += int(floor((ans[1]-ans[2])/3));
        }else{
            ans1 += ans[1];
            ans1 += int(floor((ans[2]-ans[1])/3));
        }
        cout << ans1 << endl;
    }
    return 0;
}
