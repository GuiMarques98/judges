#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl
#define IOS ios::sync_with_stdio(false); cin.tie(NULL)


int main(int argc, char const *argv[])
{
    IOS;
    int n; scanf("%d", &n);
    for (size_t i = 0; i < n; i++) {
       long long int x, k, ans=0; scanf("%I64d %I64d", &x, &k);
       if(x < k) {
           printf("%I64d\n", x);
       } else if(x == k){
           printf("2\n");
       } else if(k == 2 ) {
           if(k%2){
               printf("%I64d", (x/k)+1);
           } else {
               printf("%I64d", (x/k)+2);
           }
       } else {
           while(x) {
               if(x%k==0){
                   ans++;
                   x/=k;
               } else {
                   ans++;
                   --x;
               }
           }
           printf("%I64d\n", ans);
       }
    }
    
    return 0;
}
