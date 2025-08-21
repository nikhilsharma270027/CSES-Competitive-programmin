#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n ;
// 	cout << "Enter the N value :" << endl;
	cin >> n;
	cout << n << " ";
	while(n != 1) {
		if(n == 1) return 1;
		if(n % 2 == 0) {
			n  = n >> 1;
			cout << n ;
			if(n != 1) {

				cout << " ";
			}
		} else {
			n  = n * 3 + 1;
// 			n = n + 1;
			cout << n << " ";
		}
	}

	return 0;
}