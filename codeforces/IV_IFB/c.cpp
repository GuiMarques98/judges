#include <bits/stdc++.h>
#define debug(x) cerr << #x << " = " << x << endl;
using namespace std;

int main(int argc, char const *argv[])
{
    string x; cin >> x;
    map<char, int> a;
    for(auto i: x)
        a[i]++;

    int im=0;
    for(int i = 'A'; i < 'Z'; ++i){
        if(a[i]%2)
            ++im;
    }

    if(im <= 1)
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl; 
    return 0;
}