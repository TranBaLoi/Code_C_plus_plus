#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n+1];
		for(int j=1;j<=n;j++)	cin >> a[j];
		int i=n-1;
		while(i>0 && a[i] < a[i+1]) i--;
			int k=n;
			while(a[k] > a[i]) k--;
			swap(a[i],a[k]);
			int l=i+1,r=n;
			while(l<r)	
			{
				swap(a[l],a[r]);
				l++;
				r--;
			}
			for(int j=1;j<=n;j++)	cout << a[j] << " ";
			cout << endl;
	}
}
