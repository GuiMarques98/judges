#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl
#define IOS ios::sync_with_stdio(false); cin.tie(NULL)

int sum1, sum2;

bool swa(vector<int>& a, int n){
    int aux; 
    for (size_t i = 0; i < a.size()/2; i++) {
        if(a[i] != a[i+n]){
            aux = a[i];
            a[i] = a[i+n];
            a[i+n] = aux;
            return true;
        } else {
            for (size_t j = 1; j < n; j++){
                if(a[i] != a[j+n]) {
                    aux = a[i];
                    a[i] = a[j+n];
                    a[j+n] = aux;
                    return true;
                }
            }
        }
    }
    return false;
    
}

int main(int argc, char const *argv[])
{
    IOS;
    int n; cin>>n;
    vector<int> a;
    bool ans;
    for (size_t i = 0; i < 2*n; i++) {
        int x; cin>>x; a.push_back(x);
        if(i<n)
            sum1+=x;
        else
            sum2+=x;
    }

    if(sum1 != sum2){
        for(auto i: a)
            cout << i << " ";
        return 0;
    } else {
        ans = swa(a, n);
    }

    if(ans)
        for(auto i: a)
            cout << i << " ";
    else
        cout << -1 << endl;

    
    
    return 0;
}
