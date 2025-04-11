#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int c = 0, tc = 0, m = 0;
    int cs = 0;
    while(n--)
    {
        string in;
        cin >> in;

        if (in == "1/2")
            m += 1;
        else if (in == "1/4")
            c += 1;
        else
            tc += 1;
    }

    int piz = 1;

    cs = tc;
    piz += tc;

    int hm = 0;
    if ((m % 2) != 0)
        cs += 2;
        m += 1;

    piz += m / 2;
    
    if ((c - cs) > 0)
        piz += ceil((float)(c - cs) / 4.0);

    cout << piz << endl;

    return 0;
}