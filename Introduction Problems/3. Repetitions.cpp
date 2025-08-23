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

    string input = "";
    cin >> input;

    char last_char = input[0];
    long long max_repeat = 1;
    long long result = 0;

    for(int i = 0; i<input.size();i++) {
        if(input[i] == last_char){
            result++;
            max_repeat = max(max_repeat, result);
        } else {
            last_char = input[i];
            max_repeat = max(max_repeat, result);
            result = 1;
        }
    }
    
    cout << max_repeat;
}