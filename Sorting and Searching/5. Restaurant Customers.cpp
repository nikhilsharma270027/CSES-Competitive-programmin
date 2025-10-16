#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> &cust, int n) {
    int arr[n], dep[n];
    for(int i = 0; i < n;i++) {
        arr[i] = cust[i][0];
        dep[i] = cust[i][1];
    }

    // Sort the arrival and departure time in ascending
    // order
    sort(arr, arr + n);
    sort(dep, dep + n);

    int i = 0, j = 0;

    int currcustomer = 0, maxcustomer = 0;
    while(i < n && j < n ) {
        // If the arrival time is less than the departure
        // time
        if(arr[i] < dep[j]) {
            currcustomer++;
            maxcustomer = max(maxcustomer, currcustomer);;
            i++;
        } else {
            j++;
            currcustomer--;
        }
    }

    return maxcustomer;
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
    // Read input using cin >> ...
    // Write output using cout << ...

   int n;
   cin >> n;
   vector<vector<int>> v(n, vector<int>(2));
   // how it will store the start and end time of each customer
   // [start_time, end_time]
   for(int i = 0; i < n;i++) {
    cin >> v[i][0] >> v[i][1];
   }

    // sort the vector based on the start time of each customer
    sort(v.begin(), v.end());

    cout << solve(v, n);
    
}