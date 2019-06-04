#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << x << endl;
#define inf 1000000000


int main(int argc, char const *argv[])
{
    double g, d, r; cin >> g >> d >> r;
    double ans = r/((g/1000)*(1-(d*0.01)));
    printf("%.8lf\n", ans);
    return 0;
}

/*
    x              y
((g/1000) * v)*(d*0.01)-1 = r
(x * v) * y = r
r/y = x*v

r/(y*x) = v
r/((g/1000)*(1-(d*0.01)))
*/