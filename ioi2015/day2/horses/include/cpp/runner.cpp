#include <bits/stdc++.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

#include "horses.h"

using namespace std;

typedef vector<int> vi;
#define rep(i,lo,hi) for(int i=lo;i<hi;i++)
int main() {
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	vi x;
	vi y;
	
	rep(i,0,n)
	{
		int v;
		cin >> v;
		x.push_back(v);
	}

	rep(i,0,n)
	{
		int v;
		cin >> v;
		y.push_back(v);
	}

	cout << init(n, &x[0], &y[0]) << "\n";

	int m;
	cin >> m;
	rep(_,0,m)
	{
		int t,i,v;
		cin >> t>>i>>v;
		if (t==1)
		{
			cout << updateX(i,v) << "\n";
		}
		else
		{
			cout << updateY(i,v) << "\n";
		}
	}
}
