#include <bits/stdc++.h>

using namespace std;

void printcod(int c)
{
    if(c < 10)
    {
        cout << "0";
    }
    cout << c;
}

int main()
{
    int t;
    cin >> t;    
    while(t--)
    {
        int n;
        cin >> n;
        cin.ignore();

        map<string, int> reg;
        while(n--)
        {
            string ln;
            getline(cin, ln);
            reg[ln] += 1;
        }
        for(auto i = reg.begin(); i != reg.end(); ++i)
        {
            cout << i->first << i->second << endl;
        }
        cout << endl;
    }
    return 0;
}