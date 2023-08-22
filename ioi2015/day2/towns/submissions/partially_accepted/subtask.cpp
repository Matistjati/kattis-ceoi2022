
#include <bits/stdc++.h>

using namespace std;

int getDistance(int i, int j)
{
	cout << "? " << i << " " << j << endl;
	int ret;
	cin >> ret;
	return ret;
}


int d1[1000];
int d2[1000];
int main() {
    int N, sub;
    cin >> N >> sub;
    int mx = 0, u1, x , u2;
    for(int i = 1; i < N; i++){
        x = getDistance(0,i);
        if(x >= mx){
            mx = x;
            u1  = i;
            
        }
    }
    d1[0]=mx;
    mx = 0;
    
    for(int i = 0; i < N; i++){
        d1[i]=getDistance(u1,i);
        if(d1[i] >= mx){
            mx = d1[i];
            u2 = i;	
        }
    }
    d2[u1] = mx;
    int diam = mx;
    int res = diam;
    
    for(int i = 0; i < N; i++){
        d2[i]=getDistance(u2,i);
        int len = (d1[i] + d2[i] - diam ) / 2;
        len = d2[i] - len;
        res = min(res, max(len, diam - len));
    }
    
    int l=0, r=0, m=0;
    for(int i = 0 ; i < N ;i++){
        x = d1[i] - (d1[i] + d2[i] - diam ) / 2;
        if(x > res)
            r++;
        else
        if(x < res)
            l++;
        else{
            u1 = i;
            m++;
        }
    }
    
    
    
    //cout << m  << " " << l <<" "  << r << endl;
    if(N/2 >= m && N/2 >= l &&  N/2 >= r  )
    {
        cout << "! " << res << endl;
        return 0;
    }
    
        
    
    l=0, r=0, m=0;
    for(int i = 0 ; i < N ;i++){
        x = d2[i] - (d1[i] + d2[i] - diam ) / 2;
        if(x > res)
            r++;
        else
        if(x < res)
            l++;
        else{
        u2=i;
        m++;
        }
    }
    
    if(N/2 >= m && N/2 >= l &&  N/2 >= r  )
    {
        cout << "! " << res << endl;
        return 0;
    }
        
    /*for(int i = 0 ; i < N ;i++){
        getDistance(u2,i);	
    }*/
    cout << "! " << -res << endl;
    return 0;
}