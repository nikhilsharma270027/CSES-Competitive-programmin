#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> BitString(vector<int> &vec) {
    vector<vector<int>> res;
    int n = vec.size();
    for (int i = 0; i < (1 << n); i++) {
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                temp.push_back(1);
            } else {
                temp.push_back(0);
            }
        }
        res.push_back(temp);
    }
    return res;
}


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
    vector<int> vec;
    while (n)
    {
        if (n & 1)
            vec.push_back(1);
        else
            vec.push_back(0);
        n--;
    }
    reverse(vec.begin(), vec.end());

    vector<vector<int>> res = BitString(vec);
    cout << res.size() << "\n";
}