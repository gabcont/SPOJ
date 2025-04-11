#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int ins[100];
    queue<int>q;
    map<int,int>ocurrencias;
    while(t--)
    {
        int n, mi_pos;
        cin >> n >> mi_pos;

        int mi_impresion;

        for(int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            q.push(in);
            ocurrencias[in] += 1;
        }

        int minutos = 0;
        while(!q.empty())
        {
            int actual = q.front();
            q.pop();

            if(ocurrencias.upper_bound(actual) != ocurrencias.end())
            {
                q.push(actual);
                //for(pair<int,int> p : ocurrencias)
                  //  cout << p.first << "f s" << p.second << "#" << endl; 
            }
            else // se imprime
            {
                if(ocurrencias[actual] < 2)
                {
                    ocurrencias.erase(actual);
                }
                else
                {
                    ocurrencias[actual] -= 1;
                }
                //cout << actual << " " << mi_pos << endl;
                minutos += 1;

                if(mi_pos == 0)
                {
                    break;
                }
            }
            
            mi_pos -= 1;
            if(mi_pos < 0)
            {
                mi_pos = q.size() - 1;
            }
                
        }

        while(!q.empty())
            q.pop();
        ocurrencias.clear();
        
        cout << minutos << endl;
    }
    return 0;
}