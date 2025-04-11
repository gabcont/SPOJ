#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    vector<int> q;
    while(cin >> n and n > 0)
    {
        q.resize(n);
        for(int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            q[n - i - 1] = in;
        }
        vector<int> calle;
        bool fin_de_cola = false;
        int t;
        for(int i = 1; i <= n ;)
        {
            if(!q.empty())
            {
                t = q.back();
                q.pop_back();
            }
            else
                fin_de_cola = true;
            
                /*
            cout << i << " " << t << " ";
            for(int c : calle)
                cout << c;
            cout << endl;
            */

            if(t != i)
            {
                if(!calle.empty() and calle.back() == i)
                {
                    calle.pop_back();
                    q.push_back(t);
                    i++;
                }
                else if(fin_de_cola)
                {
                    cout << "no";
                    break;
                }
                else
                {
                    calle.push_back(t);
                }
            }
            else
            {
                i++;
                t = 0;
            }

            if(i > n)
                cout << "yes";
        }
        cout << endl;
    }
    return 0;
}