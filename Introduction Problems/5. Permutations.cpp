#include <bits/stdc++.h>
using namespace std;

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

    int n;
    cin >> n;
    
    if(n == 1)
        cout << "1 ";
    else if(n <= 3) cout << "NO SOLUTION\n";
    else {
        for(int i = 2; i <= n;i+=2) cout << i << " ";
        for(int i = 1; i <= n;i+=2) cout << i << " ";
    }
}