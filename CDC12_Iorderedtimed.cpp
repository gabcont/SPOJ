#include <bits/stdc++.h>

using namespace std;
using chrono::high_resolution_clock;
using chrono::duration_cast;
using chrono::duration;
using chrono::milliseconds;

int main(void)
{
    int t;
    cin >> t;

    auto inicio = high_resolution_clock::now();
    for(int i = 0; i < t; i++)
    {
        int m, n;
        cin >> n >> m;
        
        // Mapa SECuencia APariciones
        map<int, int> secap;

        for(int j = 0; j < n; j++)
        {
            int input;
            cin >> input;

            if (secap.count(input) > 0)
                secap[input] += 1;
            else
                secap[input] = 1;
        }

        cout << "Scenario #" << i + 1 << ": ";
        for(int j = 0; j < m; j++)
        {
            int esp;
            cin >> esp; 
            cout << secap[esp];
        }
        cout << endl;
    }
    
    auto fin = high_resolution_clock::now();
    /* Getting number of milliseconds as an integer. */
    auto ms_int = duration_cast<milliseconds>(inicio - fin);

    /* Getting number of milliseconds as a double. */
    duration<double, std::milli> ms_double = inicio - fin;

    std::cout << ms_int.count() << "ms\n";
    std::cout << ms_double.count() << "ms\n";

    return 0;
}