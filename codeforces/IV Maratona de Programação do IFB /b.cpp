#include <bits/stdc++.h>
#define debug(x) cerr << #x << " = " << x << endl;
using namespace std;

vector<int> precomp(vector<int> a){
    vector<int> b;
    b.push_back(1);
    for (size_t i = 1; i < a.size(); i++)
    {
        if(a[i] > a[i-1]){
            b.push_back(b[i-1]+1);
        }
        if(a[i] < a[i-1]){
            b.push_back(b[i-1]-1);
        }
        if(a[i-1] == a[i]){
            b.push_back(b[i-1]);
        }
    }
    return b;
}


int main(int argc, char const *argv[])
{
    int n; scanf("%d", &n);
    vector<int> a, b;
    for(int i=0; i<n ;++i){
        int x; scanf("%d", &x);
        a.push_back(x);
    }
    b = precomp(a);
    int n1; scanf("%d", &n1);
    string ans;

    
    for(int i=0;i<n1;++i){
        int l, r; scanf("%d %d", &l ,&r);
        int t = b[l]-b[r], t1 = l-r;
        if(b[r]-b[l] == r-l){
            ans+="crescente\n";
            continue;
        }
        if(abs(b[r]-b[l]) == r-l){
            ans+="decrescente\n";
            continue;
        }
        ans+="nenhum\n";
    }

    printf("%s", ans.c_str());
    return 0;
}