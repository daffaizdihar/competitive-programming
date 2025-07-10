#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ull n,m;
    double a;
    cin >> n >> m >> a;
    // cout << ceil(n/a) << "\t" << ceil(m/a) << endl;
    
    ull res = ceil(double(n/a)) * ceil(double(m/a));
    cout << res << endl;
}