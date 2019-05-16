#include <bits/stdc++.h>
#define debug(x) cerr << #x << " = " << x << endl;
using namespace std;

// 1 11 21 1211 111221 312211 12112221
int main(int argc, char const *argv[])
{
    int x; cin >> x;

    string ans = "1";

    for (size_t i = 1; i < x; i++) {
        string aux="";
        for (size_t j = 0; j < ans.length();) {
            char aux1=ans[j];
            j++;
            int count=1;
            while(ans[j]==aux1){
                count++;
                j++;
            }
            aux += to_string(count);
            aux += aux1;
        }
        ans = "";
        ans = aux;
    }
    cout << ans << endl;
    
    return 0;
}