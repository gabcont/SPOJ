#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    queue<int> q;
    while(t--)
    {
        int n, pos;
        cin >> n >> pos;

        int mi_impresion;
        for(int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            q.push(in);
            if(i == pos)
                mi_impresion = in;
        }

        int minutos = 1;
        int mayores = 0;
        int iguales_anterior_mayor = 0;
        int iguales_siguiente_mayor = 0;
        bool pasado_mi_impr = false;
        bool puede_recibir_iguales = true;

        for(int i = 0; i < n; i++)
        {
            int act = q.front();
            q.pop();

            if(act > mi_impresion)
            {
                mayores += 1;
                if(!pasado_mi_impr)
                    iguales_anterior_mayor = 0;
                iguales_siguiente_mayor = 0;
                puede_recibir_iguales = true;
                
            }
            else if(act == mi_impresion)
            {
                if(i == pos) // es mi impresion, no se agarran iguales hasta que haya otro mayor
                {
                    pasado_mi_impr = true;
                    puede_recibir_iguales = false;
                    continue;
                }
                
                if(pasado_mi_impr)
                {
                    if(puede_recibir_iguales){
                        iguales_siguiente_mayor += 1;
                    }
                }
                else
                    iguales_anterior_mayor += 1;
            }
            cout << i << " " << iguales_anterior_mayor << " " << iguales_siguiente_mayor << endl;
        }
        minutos += mayores + iguales_anterior_mayor + iguales_siguiente_mayor;
        //cout << mi_impresion << " pos= " << pos << endl; 
        cout << minutos << endl;
    }
    return 0;
}