#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int a[n],l=0,r=n-1;
		for(int i=0;i<n;i++)	cin >> a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(l<=r)
			{
				if(i%2==0)	
				{
					cout << a[r] << " ";
					r--;
				}
				else 
				{
					cout << a[l] << " ";
					l++;
				}
			}
		}
		cout << endl;
	}
}
