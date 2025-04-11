#include <bits/stdc++.h>

using namespace std;

bool es_par(int a)
{
    return (a % 2 == 0);
}

int main(void)
{
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;

        if (!((x == y) or (x == y + 2)))
        {
            cout << "No Number" << endl;
            continue;
        }

        bool x_par = es_par(x);
        bool y_par = es_par(y);

        if (x_par and y_par)
            cout << x + y;
        else if (!x_par and !y_par)
            cout << x + y - 1;
        else
            cout << "No Number";
        cout << endl;
    }
    return 0;
}
