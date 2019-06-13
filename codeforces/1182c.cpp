#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl
#define IOS ios::sync_with_stdio(false); cin.tie(NULL)

typedef struct a_t{
    int v;
    char l;
}a_t;

int main(int argc, char const *argv[])
{
    IOS;
    int n; cin>>n;
    vector<a_t> a;
    for (size_t i = 0; i < n; i++) {
        map<char, int> b;
        a_t y;
        string x; cin>>x;
        for(auto j:x)
            b[j]++;
        y.v = b['a'] + b['e'] + b['o'] + b['i'] + b['u'];
        y.l = x[x.length()-1];
        a.push_back(y);
    }
    
    
    return 0;
}
