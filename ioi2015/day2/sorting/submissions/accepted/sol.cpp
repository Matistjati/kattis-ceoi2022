#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> s, x, y, p, q;
int a[500010], b[500010], c[500010], d[500010];
bool f(int z) {
    int i, j;
    for (i = 0; i < n; i++) {
        a[i] = b[i] = s[i];
    }
    for (i = 0; i < z; i++) {
        swap(a[x[i]], a[y[i]]);
    }
    for (i = 0; i < n; i++) {
        c[a[i]] = i;
        d[b[i]] = i;
    }
    j = 0;
    for (i = 0; i < z; i++) {
        swap(d[b[x[i]]], d[b[y[i]]]);
        swap(b[x[i]], b[y[i]]);
        while (j < n && a[j] == j)j++;
        if (j == n)p[i] = q[i] = 0;
        else {
            p[i] = d[j], q[i] = d[a[j]];
            swap(b[d[j]], b[d[a[j]]]);
            swap(d[j], d[a[j]]);
            c[a[j]] = c[j];
            swap(a[j], a[c[j]]);
            c[j] = j;
        }
    }
    for (i = 0; i + 1 < n; i++) if (a[i] > a[i + 1]) return false;
    return true;
}
int main() {
    cin >> n;
    s.resize(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    cin >> m;
    x.resize(m);
    y.resize(m);
    p.resize(m);
    q.resize(m);
    for (int i = 0; i < m; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }

    int lo = 0, hi = m;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (f(mid))hi = mid;
        else lo = mid + 1;
    }
    f(lo);
    cout << lo << "\n";
    for (int i = 0; i < lo; i++)
    {
        cout << p[i] << " " << q[i] << "\n";
    }
}