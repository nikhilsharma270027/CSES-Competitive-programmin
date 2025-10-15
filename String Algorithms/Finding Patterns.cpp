#include <bits/stdc++.h>
using namespace std;

int main()
{

// This block redirects cin to read from input.txt and cout to write to output.txt
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    string text;
    cin >> text;
    
    int n;
    cin >> n;

    vector<string> words;
    for(int i = 0; i < n; i++) {
        string word;
        cin >> word;
        words.push_back(word);
    }

    // cout << text;
    // cout << n;

    for(auto & word : words) {
        if(text.find(word) != std::string::npos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }


//    cout << "exit";
}