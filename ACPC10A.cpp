#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(true)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (c == 0)
            return 0;

        int p;
        if(((c - b) != 0) and ((c - b) == (b - a)))
        {
            p = c - b;
            cout << "AP " << c + p;
        }
        else
        {
            p = c / b;
            cout << "GP " << c * p;
        }
        cout << endl;
    }
    
}