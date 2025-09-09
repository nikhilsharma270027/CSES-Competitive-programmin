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
    scanf("%d", &n);
    
    long long maxSUM = LLONG_MIN;
    long long currSUM = 0;

    for(int i = 0; i < n;i++) {
        long long num;
        cin >> num;

        // add current sum to running susm
        currSUM += num;

        // update maxSUM if currSUM is greater
        if(currSUM > maxSUM) {
            maxSUM = currSUM;
        }

        // Reset if current sum becomes negative
        if(currSUM < 0) {
            currSUM = 0;
        }
    }

    cout << maxSUM;
}