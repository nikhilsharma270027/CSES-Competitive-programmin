#include <bits/stdc++.h>
using namespace std;

string solve(int x, int y) {

    if((2 * x - y) % 3  || (2 * x - y) < 0 || (2 * y-x) % 3  || (2 * y - x) < 0 ) {
        return "NO\n";
    }

    return "YES\n";
}

int main() {

// This block redirects cin to read from input.txt and cout to write to output.txt
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios::sync_with_stdio(0);
    cin.tie(0);


    // Your actual code starts here
    // Read input using cin >> ...
    // Write output using cout << ...

    int n;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(2));
    for(int  i =0 ; i < n;i++) {
        cin >> vec[i][0] >> vec[i][1];
    }

    // condition 1 : can remove 2 -> left & 1 -> right  
    //  2 * x && 1 * Y = A  (equation 1)
    // check if the val is divisible 3
    // condition 1 : can remove 1 -> left & 2 -> right  
    //  1 * x && 2 * Y = A  (equation 1)
    // check if the val is divisible 3

    for(int i = 0; i < n;i++) {
        int A = vec[i][0], B = vec[i][1];
        cout << solve(A, B);
    }

}