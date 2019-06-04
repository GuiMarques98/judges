#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << endl

// int sum1[200000], sum2[200000], sum3[200000];
long long int sum, sum1, sum3, ans;

// int c_sum(vector<int>& a, int i, int sum, int ans){
//     if(a.size() <= i)
//         return 0;

//     ans += a[i];
//     sum -= a[i];
//     if(sum == ans){
//         return max(ans, (c_sum(a, ++i, ans, sum), c_sum(a, ++i, sum+a[i-1], ans-a[i-1])));
//     }

//     if(sum < ans){
//         return c_sum(a, ++i, sum+a[i-1], ans-a[i-1]);
//     } else {
//         return c_sum(a, ++i, sum, ans);
//     }
// }

int main(int argc, char const *argv[])
{
    int n; cin >>n;
    vector<int> a;
    for (size_t i = 0; i < n; i++) {
        int x; cin>>x;a.push_back(x);
        sum+=x;
    }
    for (size_t i=0, j=n-1; i <= j;) {
        if(sum1 <=sum3){
            sum1+=a[i++];
        } else sum3+=a[j--];

        if(sum1==sum3)
            ans = sum1;
    }
    
    cout << ans << endl;
    return 0;
}



/*

5
1 3 1 1 4

sum=10
*/