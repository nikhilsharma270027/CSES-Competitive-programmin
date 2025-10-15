#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(int idx, vector<ll> &arr, ll sum1, ll sum2, ll n)
{
    // edge case
    if (idx == n)
    {
        return abs(sum1 - sum2);
    }

    // take
    ll group1 = solve(idx + 1, arr, sum1 + arr[idx], sum2, n);
    // not take
    ll group2 = solve(idx + 1, arr, sum1, sum2 + arr[idx], n);

    return min(group1, group2);
}
int main()
{

// This block redirects cin to read from input.txt and cout to write to output.txt
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Your actual code starts here

    ll n;
    cin >> n;
    vector<ll> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout <<  solve(0, nums, 0, 0, n);
}
