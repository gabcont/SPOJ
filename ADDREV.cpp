#include <bits/stdc++.h>

using namespace std;

long long inv(string c)
{
    string res = c;
    long size = c.size();
    bool iniciar = false;
    for(auto i = 0; i < size; i++)
    {
        res[i] = c[size - i - 1];
    }
    istringstream iss(res);
    long long r;
    iss >> r;
    return r;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string a, b;
        cin >> a >> b;

        cout << inv(to_string(inv(a) + inv(b))) << endl;
    }
    return 0;
}