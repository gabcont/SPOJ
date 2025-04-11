#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    

    long n;
    cin >> n;

    map<long, long>m;
    long t = 0;
    long hs = 0;
    while(n--)
    {
        string sin;
        cin >> sin;

        long in;
        cin >> in;

        if (sin == "insert")
        {
            if(m.count(in) > 0)
            {
                if(m[in] < 2)
                    hs += 1;
                m[in] += 1;
            }
                
            else
                m[in] = 1;
        }   
        else
        {
            if(m.count(in) > 0)
            {
                if(m[in] > 1)
                {
                    m[in] -= 1;
                    if(m[in] == 1)
                        hs -= 1;
                }
                    
                else
                    m.erase(in);
            }
        }

        bool homo = (hs > 0) ? true : false;
        t = m.size();

        if(homo)
        {
            if(t > 1)
                cout << "both";
            else
                cout << "homo";
        }
        else if (t > 1)
        {
            cout << "hetero";
        }
        else
            cout << "neither";
            
        cout << endl;
    }
    
    return 0;
}