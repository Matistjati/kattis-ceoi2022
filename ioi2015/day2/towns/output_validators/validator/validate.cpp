#include "validate.h"

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for (auto& a : x)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long double ld;


int main(int argc, char **argv) {
	init_io(argc, argv);

	int subtask, testcases;
	judge_in >> subtask >> testcases;
	int k = subtask;

	int n;
	judge_in >> n;
	int qcount = 0;
	int quota;
	if (k == 1 || k == 3) quota = n * (n - 1) / 2;
	else if (k == 2 || k == 4 || k == 6) quota = (7 * n + 1) / 2;
	else quota = 5 * n;
		

	vvi dist(n, vi(n));
	rep(i,0,n)
	{
		rep(j,0,n)
		{
			judge_in >> dist[i][j];
		}
	}

	cout << n << " " << subtask << endl;

	for (;;) {
		char qtype;
		cin >> qtype;
		if (!cin) wrong_answer(("EOF"+string(1,qtype)).c_str());
		if (qtype == '?') {
			int a, b;
			cin >> a >> b;
			if (!cin) wrong_answer("EOF2");
			if (a < 0 || a > n-1 || b < 0 || b > n-1) wrong_answer("out of bounds");

			++qcount;
			if (qcount > quota) {
				wrong_answer("too many queries");
			}

			cout << dist[a][b] << endl;
		} else if (qtype == '!') {
			break;
		} else {
			wrong_answer("Invalid query type %c", qtype);
		}
	}


	int ans;
	cin >> ans;
	if (!cin) wrong_answer("EOF3");
	
	int corrans=-69;
	judge_ans >> corrans;
	if (subtask<3) ans = abs(ans);
	string s2 = "Wrong answer . Expected " +to_string(corrans) + ", got " + to_string(ans);
	if (ans!=corrans) wrong_answer(s2.c_str());

	string trailing;
	if (cin >> trailing){
		wrong_answer("Trailing output");
	}

	accept();
}
