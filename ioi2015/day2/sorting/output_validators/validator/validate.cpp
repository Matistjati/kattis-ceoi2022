#include "validate.h"

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define debug(...) //ignore
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef long double ld;


int main(int argc, char **argv) {
    init_io(argc, argv);

    int n;
    judge_in >> n;

    vi perm;
    rep(i,0,n) {
        int v;
        judge_in >> v;
        perm.emplace_back(v);
    }

    int s;
    judge_in >> s;
    vector<pii> swaps;
    rep(i,0,n)
    {
        int a,b;
        judge_in >> a >> b;
        swaps.emplace_back(a,b);
    }

    auto check = [&](istream& sol, feedback_function feedback){
        int k;
        if(!(sol >> k))
        {
            feedback("Expected more output");
        }

        vi permcop = perm;

        pii ret = {k,false};
        if (k>s) feedback("Too many moves");
        rep(i,0,k)
        {
            int a,b;
            if(!(sol >> a >> b))
            {
                feedback("Expected more output");
            }
            if (a<0||b<0||a>=n||b>=n) feedback("Out of bounds");
            swap(permcop[swaps[i].first], permcop[swaps[i].second]);
            swap(permcop[a], permcop[b]);
        }


        
        bool works = 1;
        for (int i = 0; i < n-1; i++)
        {
            works &= permcop[i]<permcop[i+1];
        }
        ret.second = works;

        string kkk = "";
        for (int i = 0; i <n;i++)
        {
            kkk+=to_string(permcop[i]);
        }
        if (!works) feedback(kkk.c_str());
        string trailing;
        if(sol >> trailing)
        {
            feedback("Trailing output");
        }
        return ret;
    };

    pii judge = check(judge_ans, judge_error);
    pii author = check(author_out, wrong_answer);

    if (!get<1>(judge)) judge_error("Judge did not find solution");
    bool needbest = s==3*n;
    if (get<0>(author) < get<0>(judge))
    {
        if (get<1>(author)) judge_error("Contestant found better solution");
        else
        {
            wrong_answer("Did not identify the correct amount of moves");
        }
    }

    if (needbest && get<0>(author) > get<0>(judge)) 
    {
        wrong_answer("Did not identify the correct amount of moves");
    }
    if (get<0>(author)>s)
    {
        wrong_answer("Too many moves");
    }

    if (!get<1>(author))
    {
        wrong_answer("Did not produce correct answer");
    }

    cerr << "AC";
    accept();
}
