#include <bits/stdc++.h>
using namespace std;

int getDistance(int i, int j)
{
	cout << "? " << i << " " << j << endl;
	int ret;
	cin >> ret;
	return ret;
}

int main()
{
	int N, tc;
	cin >> N >> tc;

	int d[200][200] {}, x {};
	for(int i = 1; i < N; ++i)
		if((d[0][i] = getDistance(0, i)) > d[0][x])
			x = i;
	int y = x;
	for(int i = 0; i < N; ++i)
		if((d[x][i] = getDistance(x, i)) > d[x][y])
			y = i;
	
	int R = 1e6, c[N], h = -1;
	array<int, 2> cR {R};
	
	for(int i = 0; i < N; ++i) {
		c[i] = (d[x][i] - d[0][i] + d[0][x]) / 2;
		R = min(R, max(c[i], d[x][y] - c[i]));
		if(i && i != x) {
			cR[0] = min(cR[0], c[i]);
			cR[1] = max(cR[1], c[i]);
		}
	}
	
	for(int i = 0; i < N; ++i) if(R == max(c[i], d[x][y] - c[i])) {
		int cnt[2] {};
		for(int j = 0; j < N; ++j) if(c[i] != c[j])
			++cnt[c[j] > c[i]];
		while(!(cnt[0] + cnt[1]));
		if(max(cnt[0], cnt[1]) <= N/2) h = i;
	}
	if(h < 0) return -R;
	c[0] = cR[1], c[x] = cR[0];
	d[x][x] = 2 * c[x];
	
	auto same = [&](int i, int j) {
		return i == j || getDistance(i, j) < d[x][i] + d[x][j] - 2 * c[h];
	};
	
	int cnt {}, val {}, w[N] {};
	map<int, bool> bad;
	
	for(int i = 0; i < N; ++i) if(c[i] == c[h]) {
		if(!cnt) val = i, bad.clear();
	
		if(same(i, val)) ++cnt, ++w[val];
		else --cnt, w[i] = 1, bad[i] = 1;
	}
	
	cnt = 0;
	for(int i = 0; i < N; ++i)
		if(!bad[i] && w[i] && same(i, val)) cnt += w[i];
	
	cout << "! " << (cnt > N/2 ? -R : R) << endl;

}

