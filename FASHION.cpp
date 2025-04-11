// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
    // Write C++ code here
    int tests;
    cin >> tests;
    for(int t = 0; t < tests; t++)
    {
        int n;
        cin >> n;
        
        vector<int> hom(n);
        vector<int> muj(n);
        
        int h;
        for(auto i = 0; i < n; i++)
        {
            cin >> h;
            hom[i] = h;
        }
        sort(hom.begin(), hom.end());
        
        int m;
        for(auto i = 0; i < n; i++)
        {
            cin >> m;
            muj[i] = m;
        }
        sort(muj.begin(), muj.end());

        int res = 0;
        for(int i = 0; i < n; i++)
        {
            res += muj.at(i) * hom.at(i);
        }
        cout << res << endl;
    }

    return 0;
}