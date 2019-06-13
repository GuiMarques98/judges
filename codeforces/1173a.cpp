#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl
#define IOS ios::sync_with_stdio(false); cin.tie(NULL)


int main(int argc, char const *argv[])
{
    IOS;

    int x, y, z; cin>>x>>y>>z;

    int ans=x-y;
    if(!ans && x == 0){
        cout << "?" << endl;
        return 0;
    }
    if(ans == 0){
        cout << 0 << endl;
        return 0;
    }

    if(abs(ans)-z == 0 || abs(ans)-z < 0){
        cout << "?" << endl;
        return 0;
    }


    if(ans < 0)
        cout << "-" << endl;
    else
        cout << "+" << endl;
    return 0;
}
