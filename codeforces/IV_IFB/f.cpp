#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << x << endl;
#define inf 1000000000

int dp[10010][10010] {{0}};
int a[10010], b[10010];
int n, m;

int main(int argc, char const *argv[])
{
    scanf("%d %d", &n, &m);

    for (size_t i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (size_t i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (int item = 1; item <= n; item++) {
        for (int capacity = 1; capacity <= m; capacity++) {
            int maxValWithoutCurr = dp[item - 1][capacity]; // This is guaranteed to exist
            int maxValWithCurr = 0; // We initialize this value to 0
            
            int weightOfCurr = b[item - 1]; // We use item -1 to account for the extra row at the top
            if (capacity >= weightOfCurr) { // We check if the knapsack can fit the current item
                maxValWithCurr = a[item - 1]; // If so, maxValWithCurr is at least the value of the current item
                
                int remainingCapacity = capacity - weightOfCurr; // remainingCapacity must be at least 0
                maxValWithCurr += dp[item - 1][remainingCapacity]; // Add the maximum value obtainable with the remaining capacity
            }
            
            dp[item][capacity] = max(maxValWithoutCurr, maxValWithCurr); // Pick the larger of the two
        }
    }
    printf("%d\n", dp[n][m]);

    return 0;
}