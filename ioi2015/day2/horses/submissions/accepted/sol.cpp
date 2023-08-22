#include<bits/stdc++.h>
#include "horses.h"
using namespace std;
const int c=524288;
long long mod=1e9+7;
struct s{
	long long r, x, y;
	double R, X, Y;
} t[2*c];
void upd(int a) {
	int x=2*a, y=x+1;
	t[a].X=t[x].X+t[y].X, t[a].x=t[x].x*t[y].x%mod;
	if (t[x].R>=t[x].X+t[y].R) {
		t[a].R=t[x].R, t[a].r=t[x].r;
	} else {
		t[a].R=t[x].X+t[y].R;
		t[a].r=t[x].x*t[y].r%mod;
	}
	if (a>1) upd(a/2);
}
void add(int a, int x, int y) {
	if (x) t[a].x=x, t[a].X=log(x);
	if (y) t[a].y=y, t[a].Y=log(y);
	t[a].r=t[a].x*t[a].y%mod, t[a].R=t[a].X+t[a].Y;
	upd(a/2);
}
int init(int n, int x[], int y[]) {
	for (int i=0; i<n; i++) add(c+i, x[i], y[i]);
	return t[1].r;
}
int updateX(int a, int b) {
	add(c+a, b, 0);
	return t[1].r;
}
int updateY(int a, int b) {
	add(c+a, 0, b);
	return t[1].r;
}