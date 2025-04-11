#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    vector<long>c(10000);
    while (cin >> n and n != -1)
    {
        // vector<long>c(n);
        long sum = 0;
        for(long i = 0; i < n; i++)
        {
            long in;
            cin >> in;
            sum += in;
            c[i] = in;
        }

        long m = 0;
        if((sum % n) != 0)
        {
            m = -1;
        }
        else
        {
            long repa = sum / n;
            for(long i = 0; i < n; i++)
            {
                if(c[i] < repa)
                    m += repa - c[i];
            }
        }

        cout << m << endl;
    }
}