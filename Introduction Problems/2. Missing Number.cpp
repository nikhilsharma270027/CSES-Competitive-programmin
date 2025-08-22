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

    long long n;
    cin >> n;
    vector<long long> arr(n - 1);
    for (int i = 0; i <= arr.size(); i++)
    {
        cin >> arr[i];
    }

    long long original = (n * (n + 1 ))/ 2;
    // cout << original;
    long long expected = 0;
    for (long long &it : arr)
        expected += it;
    cout << original - expected;

    return 0;
}