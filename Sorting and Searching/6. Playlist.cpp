#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll N, vector<long long> songs)
{
    ll start = 0, ans = 0;
    // Map to store the last occurrence of all the
    // characters
    map<ll, ll> mp;

    // Increment end pointer character by character
    for (ll end = 0; end < N; end++)
    {
        // If the current song is not present in the map
        if (mp.find(songs[end]) == mp.end())
            mp.insert({songs[end], end});
        else
        {
            // If the current song is present in the map and
            // is inside the window
            if (mp[songs[end]] >= start)
                start = mp[songs[end]] + 1;
            // Update the last occurrence of current
            // character to the current index
            mp[songs[end]] = end;
        }
        // Update ans to store the maximum length of range
        // of unique values
        ans = max(ans, end - start + 1);
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    vector<long long> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    cout << solve(n, vec) << "\n";
    return 0;
}