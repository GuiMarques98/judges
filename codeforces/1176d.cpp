#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl
#define IOS ios::sync_with_stdio(false); cin.tie(NULL)

bool prime[2750131+10];

void precomp(){
    for (size_t i = 4; i < 2750131+10; prime[i]=false, i+=2)

    for (size_t i = 3; i < sqrt(2750131+10); i++){
        if(prime[i]){
            for (size_t j = i; j < 2750131+10;prime[j]=false , j+=i);            
        }
    }
}

int main(int argc, char const *argv[])
{
    IOS;
    int n; cin>>n;
    int a[n], b[n*2];
    for (size_t i = 0; i < n*2; i++) {
        cin>>b[i];
    }

    
    return 0;
}
