#include <bits/stdc++.h>
using namespace std;

int N, x;
set<int> S;

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
    for(int i = 0; i < N; i++){
        scanf("%d", &x);
        S.insert(x);
    }
    printf("%d\n", (int) S.size());
    
}