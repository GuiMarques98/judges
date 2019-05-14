#include <bits/stdc++.h>
#define debug(x) cerr << #x << " = " << x << endl;
using namespace std;

const int size = 1e7+10;
bool prime[size] = {1};

void precomp() {
    prime[1] = false;

    for(int i=2; i<size; ++i) {
        if(prime[i]){
            for (size_t j = 2; (j*i) < size; j++) {
                prime[i*j] = false;
            }
        }
    }
}

bool is_prime(int x) {
    for(;x > 9; x/=10){
        if(!prime[x])
            return false;
    }
    if(!prime[x])
        return false;
    return true;
}

int main(int argc, char const *argv[])
{
    memset(prime, 1, sizeof prime);
    precomp();
    int n; scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        int x=0;
        scanf("%d", &x);
        if(is_prime(x))
            printf("S\n");
        else
            printf("N\n");
    }
    
    return 0;
}