#include "validator.h"

void run() {
	int n = Int(1,Arg("maxn"));
	Endl();
	int maxv = Arg("maxv", int(1e9));
	int minx = Arg("minx",1);
	vector<int> x = SpacedInts(n, minx, maxv);
	vector<int> y = SpacedInts(n, 1, maxv);
	int m = Int(0,Arg("maxm"));
	Endl();


	for (int i=0;i<m;i++)
	{
		int t = Int(1, 2);
		Space();
		int ind = Int(0, n-1);
		Space();
		if (t==1) int v = Int(minx, int(1e9));
		else int v = Int(1, int(1e9));
		Endl();
	}
	Eof();
}
