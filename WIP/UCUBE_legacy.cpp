#include <bits/stdc++.h>

using namespace std;

map<tuple<int,int,int>, int> cubos_borrados;

void add_cb(int x, int y, int z)
{
    tuple<int, int, int> coord = {x,y,z};
    cubos_borrados[coord] += 1;
    cout << "("  << x << ", " << y << ", " << z << ") = " << cubos_borrados[coord] << endl;
}

int main()
{
    long t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int valor_max = pow(n, 3);

        

        int x = 0, z = 0;
        for(int y = 0; y < n; y++)
        {
            string frente, izq, atras, der, arriba, abajo;
            cin >> frente >> izq >> atras >> der >> arriba >> abajo;

            // frente (+0, y, 0)
            z = 0;
            for(x = 0; x < n; x++)
            {
                if(frente[x] == '.')
                {
                    for(int i = 0; i < n; i++)
                    {
                        add_cb(x, y, z + i);
                    }
                }
            }

            // atras (-n-1, y, n-1)
            z = n-1;
            for(x = n-1; x >= 0; x--)
            {
                if(atras[x] == '.')
                {
                    for(int i = 0; i < n; i++)
                    {
                        add_cb(x, y, z - i);
                    }
                }
            }

            // derecha (n - 1, y, +0)
            x = n - 1;
            for(z = 0; z < n; z++)
            {
                if(der[z] == '.')
                {
                    for(int i = 0; i < n; i++)
                    {
                        add_cb(x - i, y, z);
                    }
                }
            }

            // izquierda (0, y, -n-1)
            x = 0;
            for(z = n-1; z >= 0; z--)
            {
                if(izq[z] == '.')
                {
                    for(int i = 0; i < n; i++)
                    {
                        add_cb(x + i, y, z);
                    }
                }
            }

            // abajo (+0, n - 1, 0)
            // y = n - 1;
            z = y;
            for(x = 0; x < n; x++)
            {
                if(abajo[x] == '.')
                {
                    for(int i = 0; i < n; i++)
                    {
                        add_cb(x, n - 1 - i, z);
                    }
                }
            }

            // arriba (+0, 0, n-1)
            // y = n - 1;
            z = n - 1 - y;
            for(x = 0; x < n; x++)
            {
                if(abajo[x] == '.')
                {
                    for(int i = 0; i < n; i++)
                    {
                        add_cb(x, i, z);
                    }
                }
            }
        }
        cout << valor_max - cubos_borrados.size() << endl;
        cubos_borrados.clear();
    }
    return 0;
}