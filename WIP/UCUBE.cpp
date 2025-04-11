#include <bits/stdc++.h>

using namespace std;

vector<string> frenteyz(10), izquierdayz(10), atrasyx(10), derechayz(10), arribazx(10), abajozx(10);

int main()
{
    long t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int cubos = 0;

        for(int i = 0; i < n; i++)
        {
            string buffer;
            cin >> frenteyz[i] >> izquierdayz[i] >> atrasyx[i] >> derechayz[i] >> arribazx[i] >> abajoxz[i];
        }

        for(int x = 0; x < n; x++)
        {
            for(int y = 0; y < n; y++)
            {
                for(int z = 0; z < n; z++)
                {
                    //cout << x << " " << y << " " << z << endl;
                    if(frentexy[y][x] == '.')
                        continue;
                    if(derechazy[y][x] == '.')
                        continue;
                    if(abajoxz[z][x] == '.')
                        continue;
                    cubos += 1;
                }
            }
        }

        cout << cubos << endl;
    }
    return 0;
}