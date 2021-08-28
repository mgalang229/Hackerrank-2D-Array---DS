/*
			- calculate the sum:
			- the first 3 elements (curent row)
			- middle element (next row)
			- the next 3 elements (after next row)
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int a[6][6];
	for(int i=0; i<6; ++i)
		for(int j=0; j<6; ++j)
			cin >> a[i][j];
	int ans=INT_MIN;
	for(int i=0; i<6; ++i)
		for(int j=0; j<6; ++j) {
			if (i+2<6&&j+2<6) {
				int sum=0;
				for(int k=j; k<=j+2; ++k) {
					sum+=a[i][k];
					sum+=a[i+2][k];
				}
				sum+=a[i+1][j+1];
				ans=max(ans, sum);
			}
		}
	cout << ans << "\n";
}
