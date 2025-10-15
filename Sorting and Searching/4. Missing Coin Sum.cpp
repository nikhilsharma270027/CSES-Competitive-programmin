#include <bits/stdc++.h>
using namespace std;

const int maxN = 2e5;
typedef long long ll;
int N, x[maxN];
ll ans;

int main()
{

// This block redirects cin to read from input.txt and cout to write to output.txt
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Your actual code starts here
    // Read input using cin >> ...
    // Write output using cout << ...

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &x[i]);
    sort(x, x + N);
    ans = 1;
    for (auto coin : x)
    {
        if (coin > ans)
            break;
        ans += coin;
    }
    cout << ans << "\n";
}
