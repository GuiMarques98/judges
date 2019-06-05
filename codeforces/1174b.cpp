#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << (x) << endl
#define IOS ios::sync_with_stdio(false); cin.tie(NULL)
#define MAX 2000000000


bool s(int a, int b) {
    bool x=!(a&1), y=!(b&1);
    if(a < b && (a != b)){
        return true;
    } else {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    IOS;
    bool p=false, in=false;
    int n; scanf("%d", &n);
    vector<int> a;
    for (size_t i = 0; i < n; i++) {
        int x; scanf("%d", &x); a.push_back(x);
        if(x%2)
            p=true;
        else
            in=true;
    }

    if(p&&in) sort(a.begin(), a.end());

    for (size_t i = 0; i < n; i++)
    {
        if(i==n-1)
            printf("%d\n", a[i]);
        else
            printf("%d ", a[i]);
            
    }
    
    return 0;
}