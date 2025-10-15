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
    int x;
    scanf("%d", &x);
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }   
    vector<int> 
    // sort(arr.begin(), arr.end());
    
    for(int  i = 0;i<arr.size();i++){
        int remain = x - arr[i];
        for(int j = 0;j < arr.size();j++) {
            if(arr[j] == remain) {
                count ++;
            }
        }
    }
     
    count;
    
}