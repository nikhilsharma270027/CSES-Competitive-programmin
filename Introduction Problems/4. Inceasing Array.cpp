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

    long long moves = 0;
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < arr.size(); i++) {
        if(arr[i] < arr[i-1]) {
            moves += arr[i-1] - arr[i];
            arr[i] = arr[i-1];  // Update current element
        }
    }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    cout << endl << moves ;
    return 0;
}