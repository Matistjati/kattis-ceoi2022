#include <bits/stdc++.h>
using namespace std;
#include "horses.h"

#define ll long long
#define INF (ll)1e9+7
#define fo(i, x) for(ll i = 0; i<x;i++)
#define pb push_back
    
typedef vector<ll> vl;
    
    
vl x, y;
    
ll eval(){
    ll ans = 1, current = 1;
    double bestLog = 0, currentLog = 0;
    int n = x.size();
    fo(i, n){
        current = (current*x[i])%(INF);
        currentLog += log10l(x[i]);
        if(currentLog+log10l(y[i]) > bestLog){
            bestLog = currentLog+log10l(y[i]);
            ans = (current*y[i])%(INF);
        }
    }
    return ans;
}
    
int init(int N, int X[], int Y[]) {
    fo(i, N){
        x.pb(X[i]);
        y.pb(Y[i]);
    }
    return eval();
}
    
int updateX(int pos, int val) {	
    x[pos] = val;
    return eval();
}
    
int updateY(int pos, int val) {
    y[pos] = val;
    return eval();
}
    
    
    