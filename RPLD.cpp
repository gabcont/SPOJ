#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long t;
    cin >> t;

    for(auto i = 1; i <= t; i++)
    {
        long n, r;
        cin >> n >> r;  
        bool pos = true;
        map<pair<long, long>, int>m;

        for(int j = 0; j < r; j++)
        {
            long i, c;
            cin >> i >> c;

            pair<long,long>p = {i,c};
            if(m.count(p) > 0)
            {
                pos = false;
            }
            else
            {
                m[p] = 1; 
            }
        }
        if (pos)
        {
            cout << "Scenario #" << i << ": possible" << endl;
        }
        else
            cout << "Scenario #" << i << ": impossible" << endl;
    }
    return 0;
}